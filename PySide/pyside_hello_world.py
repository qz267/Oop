# -*- coding: utf-8 -*-
#!/usr/bin/python

# 导入PySide类
import sys
from PySide.QtCore import *
from PySide.QtGui import *

# 创建一个Qt application
app = QApplication(sys.argv)
# 创建一个标签并显示
label = QLabel("Hello World")
label.show()
# 进入Qt application主循环
app.exec_()
sys.exit()