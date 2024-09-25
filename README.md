Git repo with cad files for the lazyKB build.
The build is made for kailh choc V1 switches and a rpi pico controller, and to be handwired.
The demo.dxf is a cad file for cutting in some way a plate (I made it out of cardboard) to test out if the board tickles your fancy.
The Plate.dxf is a cad file made for sending to an online laser cutting service, it contains multiple versions of the same plate as this was my first time working with a laser cutter, and I wasn't confident about the tolerances, so I made multiple versions with holes with 0.1, 0.15, and 0.20 mm smaller square holes to avoid the pieces falling out. The 0.1 offset seemed to work fine, so I would go with either that one or the 0.15, the 0.20 would definitely require a lot of sanding.
The firmware is made for compilation with qmk firmware, to compile it easily I would add the sus_kb folder to the keyboards/handwired/ directory of the qmk_firmware folder, and compile it as if it were another regular firmware.

IMPORTANT!!! I am super dumb, I made a mistake and made the distance between the top and half row 0.5 mm shorter of what it should have been, when I get the time I will correct the cad files.
