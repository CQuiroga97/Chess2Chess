import numpy as np
import pyaudio
NOTE_MIN = 50
NOTE_MAX = 79
FSAMP = 22050 
FRAME_SIZE = 500
FRAMES_PER_FFT = 16
SAMPLES_PER_FFT = FRAME_SIZE*FRAMES_PER_FFT
FREQ_STEP = float(FSAMP)/SAMPLES_PER_FFT
NOTE_NAMES = 'Do Do# Re Re# Mi Fa Fa# Sol Sol# La La# Si'.split()
def freq_to_number(f): return 69 + 12*np.log2(f/440.0)
def number_to_freq(n): return 440 * 2.0**((n-69)/12.0)
def note_name(n): return NOTE_NAMES[n % 12] + str(n/12 - 1)
def note_to_fftbin(n): return number_to_freq(n)/FREQ_STEP
imin = max(0, int(np.floor(note_to_fftbin(NOTE_MIN-1))))
imax = min(SAMPLES_PER_FFT, int(np.ceil(note_to_fftbin(NOTE_MAX+1))))

buf = np.zeros(SAMPLES_PER_FFT, dtype=np.float32)
num_frames = 0
stream = pyaudio.PyAudio().open(format=pyaudio.paInt16, channels=1, rate=FSAMP, input=True, frames_per_buffer=FRAME_SIZE)
stream.start_stream()
window = 0.5 * (1 - np.cos(np.linspace(0, 2*np.pi, SAMPLES_PER_FFT, False)))
nota = None
while stream.is_active():
    buf[:-FRAME_SIZE] = buf[FRAME_SIZE:]
    buf[-FRAME_SIZE:] = np.fromstring(stream.read(FRAME_SIZE), np.int16)
    fft = np.fft.rfft(buf * window)
    freq = (np.abs(fft[imin:imax]).argmax() + imin) * FREQ_STEP
    n = freq_to_number(freq)
    n0 = int(round(n)) 
    num_frames += 1    
    if freq >= 320:
        if nota != note_name(n0): 
            nota = note_name(n0)
            print (nota)
            
        