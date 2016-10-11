#!/bin/bash
# _*_ coding: utf-8 _*_
import os
export = ""    #character
for root,dirs,files in os.walk("/home/lhj/Documents"):
	export += "\n %s;%s;%s\n" % (root, dirs, files)
open('mycd2-1.cdc','a').write(export) 
	
	