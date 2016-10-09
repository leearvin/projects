#!/bin/bash
# _*_ coding: utf-8 _*_
import os
#print os.listdir("/media/lhj/sata")	#work
#print os.listdir("/dev/sda1")		#not work
#print os.walk('/media/lhj/sata')    #<generator object walk at 0x7fb765f85910>
for root,dirs,files in os.walk("/media/lhj/sata"):
	#print root,dirs,files
	open('mycd.cdc','a').write("%s %s %s" % (root,dirs,files))   #format output