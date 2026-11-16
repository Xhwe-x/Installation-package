[Variables]

Author=Morteza Nasirivand
Language=Chinaese
Location=IRXX0018
Unit=m
Format=H
Hidden=0
Hidden2=1
Player=MediaMonkey

;-------------------------------------------------------------
;-------------------------------------------------------------

;NOTES:

;This below is the settings for the dock (Folders,Internet links,PC Power).
;If you are not familiar with Rainmeter from earlier,please don't edit anything!
;It's too complicated and sensitive,if you don't know what you doing!
;But i will try to explain to you as much as i can.This "#@#\" is shortened for "@Resources" folder.It's a folder where the icons and other parts of the skin are located.
;If you want to change icon-s,new icon-s,you must put in "@Resources" folder.Also,icons must be in PNG file format.
;When you change "icon and name path",for example if you want to change "My Computer" icon to "CCleaner",it should look like this:

;This is example for some program:

;Folder1NameAndPath=#@#\CCleaner.png
;Folder1Text=CCleaner
;FolderLocationPath1=!Execute ["C:\Program Files\CCleaner\CCleaner64.exe"]

;This is example for some internet links:

;Link4NameAndPath=#@#\Twitter.png
;Link4Text=Twitter
;LinkLocationPath4=!Execute ["https://twitter.com/?lang=en"]

;etc..

;On this site : https://docs.rainmeter.net/manual/getting-started/customizing/
;you can find all information,about customizing some skin.To change color,font,size,etc..
;You can also learn how to make your first skin. :)
;Thank you for your understanding! :)


;----------------------Internet Links Settings-------------------
;----------------------------------------------------------------


LinkIcon1NameAndPath=#@#\My Computer.png
Link1Text=Google
LinkLocationPath1=["shell:MyComputerFolder"]

LinkIcon2NameAndPath=#@#\Downloads.png
Link2Text=Facebook
LinkLocationPath2=["shell:downloads"]

LinkIcon3NameAndPath=#@#\Photoshop.png
Link3Text=Gmail
LinkLocationPath3=!Execute ["C:\Program Files\Adobe\Adobe Photoshop CC 2019\Photoshop.exe"]

LinkIcon4NameAndPath=#@#\Illustrator.png
Link4Text=Deviantart
LinkLocationPath4=!Execute ["C:\Program Files\Adobe\Adobe Illustrator CC 2019\Support Files\Contents\Windows\Illustrator.exe"]

LinkIcon5NameAndPath=#@#\After Effects.png
Link5Text=Twitter
LinkLocationPath5=!Execute ["C:\Program Files\Adobe\Adobe After Effects CC 2019\Support Files\AfterFX.exe"]

LinkIcon6NameAndPath=#@#\Premiere.png
Link6Text=Unsplash
LinkLocationPath6=!Execute ["C:\Program Files\Adobe\Adobe Premiere Pro CC 2019\Adobe Premiere Pro.exe"]


