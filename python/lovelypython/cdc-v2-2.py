#!/bin/bash
# _*_ coding utf-8 _*_
import os
export = []         # array
for root, dirs, files in os.walk('/home/lhj/Documents'):
	export.append("\n %s;%s;%s" % (root,dirs,files))
open("mycd2-2.cdc",'w').write("".join(export))
