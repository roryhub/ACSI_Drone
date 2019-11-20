from kivy.app import App
from kivy.uix.widget import Widget
from kivy.properties import StringProperty

import threading
import os
import time

def terminal_thread():
    os.system('gnome-terminal -- bash -c "killall -9 roscore; killall -9 rosmaster;roslaunch acsi_trajectory Rory.launch; exec bash"')

def terminal_thread2():
    #os.system('gnome-terminal -- bash -c "rostopic echo /trajectory_array; exec bash"')
    pass


class LaunchSelector(Widget):
    def __init__(self, **kwargs):
        super(LaunchSelector, self).__init__(**kwargs)

    def launch_all(self):
        threading.Thread(target=terminal_thread,daemon=True).start()
        time.sleep(2)
        threading.Thread(target=terminal_thread2,daemon=True).start()

        App.get_running_app().stop()

class LaunchApp(App):
    def build(self):
        
        return LaunchSelector()

if __name__ == '__main__':
    client_thread = threading.Thread(target=LaunchApp().run(),daemon=True)
    client_thread.start()

