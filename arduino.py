import serial
#from serial import Serial
ser = serial.Serial('COM3', 115200) # ここのポート番号を変更
ser.readline()
while True:
  val_arduino = ser.readline()
  val_decoded = int(repr(val_arduino.decode())[1:5])
  print(val_decoded)
ser.close()


