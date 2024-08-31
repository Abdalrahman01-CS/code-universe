import qrcode

img = qrcode.make("abd@gmail.com")
img.save("qr.png", "PNG")
