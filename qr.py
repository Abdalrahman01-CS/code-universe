import qrcode

img = qrcode.make("https://atqcaviation.com")
img.save("qr.text", "TEXT")
