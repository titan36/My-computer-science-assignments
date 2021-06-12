#!/usr/bin/env python3

import urllib.request
import urllib.error
import re
import sys
import time
import os
import pipes
videos = os.listdir('video/')
for video in videos:
	file, file_extension = os.path.splitext(video)
	file = pipes.quote(file)
	video_to_wav = 'ffmpeg -i video/' + file + file_extension + ' wav/' + file + '.wav'
	final_audio = 'lame wav/'+ file + '.wav' + ' MP3/' + file + '.mp3'
	os.system(video_to_wav)
	os.system(final_audio)
	#file=pipes.quote(file)
	#os.remove(file + '.wav')
	print("sucessfully converted ", video, " into audio!")
