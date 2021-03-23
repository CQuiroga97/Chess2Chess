import numpy as np
import os
from skimage.io import ImageCollection
import skimage
import cv


class WebcamVideo(CvVideo):
    """
    Opencv-based video loader.
    Parameters
    ----------
    source : str
        Camera number.
    size: tuple, optional
        Size of returned array.
    """
    def __init__(self, source=None, size=None, backend=None):
        if source is None:
            source = -1
        self.source = source
        self.capture = cv.CreateCameraCapture(source)
        self.size = size


if __name__ == "__main__":
    v = WebcamVideo()

    import time

    print ("Capturing 100 frames")
    tic = time.time()
    for i in range(50):
        v.get()

    toc = time.time() - tic
    print (toc)

    from skimage import io
    io.imshow(v.get())
    io.show()