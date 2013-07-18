import gevent
from grobot import GRobot

def test():
    robot = GRobot()
    #do something

gevent.spawn(test).join()