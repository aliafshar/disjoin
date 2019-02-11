import os
import subprocess

IND = 'sounds/wavs'
OUT = 'sounds/samples'

for f in os.listdir(IND):
    p = os.path.join(IND, f)
    b = os.path.splitext(f)[0]
    o = os.path.join(OUT, b + '.raw')

    args = [
        'sox',
        '--volume', '0.99',
        p,
        '--bits', '16',
        '--encoding', 'signed-integer',
        '--endian', 'little',
        '--rate', '44100',
        '--channel', '1',
        o,
    ]

    print args
    print subprocess.call(args)

