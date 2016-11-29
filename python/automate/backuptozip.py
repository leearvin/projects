#! python3
# -*- coding:utf-8 -*-
# backuptozip.py
# copy   an entire foler and its contents into a ZIP file whose finename
# increments
import os
import zipfile


def backupToZip(bkfolder="E:\\projects\\projects\\python\\automate"):

    # make sure folder  is absolute
    bkfolder = os.path.abspath(bkfolder)

    # Figure out the filename this code should use base on
    # what files already exist
    number = 1
    while True:
        zipFilename = os.path.basename(
            bkfolder) + '_' + str(number) + '.zip'  # create zipfile name
        if not os.path.exists(zipFilename):
            break
        number = number + 1

    # create the ZIP file handle.
    print('Creating %s...' % zipFilename)
    backupZip = zipfile.ZipFile(zipFilename, 'w')

    #  Walk the entire folder tree and compress the files in each folder..
    for foldername, subfolders, filenames in os.walk(bkfolder):
        print('Adding files in %s...' % (foldername))
        backupZip.write(foldername)

    # Add all the files in this folder to the ZIP file.
     for filename in filenames:
        newBase = os.path.basename() + '_'
        if filename.startswitch(newBase)


    print('backup %s done.' % bkfolder)


backupToZip('E:\\projects\\projects\\python\\automate')
