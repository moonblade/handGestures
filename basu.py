#!/usr/bin/env python
import numpy as np
import cv2 
import time

cap = cv2.VideoCapture(0)
# fgbg = cv2.BackgroundSubtractorMOG()

# while(True):
# 	ret, frame = cap.read()
# 	# fgmask = fgbg.apply(frame)

# 	cv2.imshow('frame',frame)
# 	# cv2.imshow('frame',fgmask)
# 	if cv2.waitKey(1) & 0xFF == ord('q'):
# 		break
time.sleep(2)
cap.release();
