Git repo with cad files for the lazyKB build.
The build is made for kailh choc V1 switches and a rpi pico controller, and to be handwired. The rows have diodes, the columns do not.
The demo.dxf is a cad file for cutting in some way a plate (I cut it out of cardboard) to test out if the board tickles your fancy.
The Plate.dxf is a cad file made for sending to an online laser cutting service, it contains multiple copies of the same plate, with the keycaps holes made with an inset of 0.5 mm so as to account for laser cutter error. I advise anyone willing to outsource the laser cutting to ask the provider for advice with tolerances, and to modify the inset to account for them. For the laser cutting service I went with (archilaser, they are based in italy as I am as well) the standard inset worked just fine.
The firmware is made for compilation with qmk firmware, to compile it easily I would add the sus_kb folder to the keyboards/handwired/ directory of the qmk_firmware folder, and compile it as if it were another regular firmware.

IMPORTANT!!! I am super dumb, I made a mistake and made the distance between the top and half row 0.5 mm shorter of what it should have been, when I get the time I will correct the cad files.
