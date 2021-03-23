  
"""Simple example showing how to get keyboard events."""

from __future__ import print_function
import subprocess
from inputs import get_key
from inputs import get_gamepad

def main():
    """Just print out some event infomation when keys are pressed."""

    while 1:
        
        events = get_key()
        if events:
            for event in events:
                if(event.code != "SYN_REPORT"):

                    if(event.code == "KEY_RESERVED"):
                        
                        
                        subprocess.call(['C:\\Users\\quiro\\AppData\\Local\\Playnite\\PlayniteUI.exe'])
                        


if __name__ == "__main__":
    main()