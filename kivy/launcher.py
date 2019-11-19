from kivy.app import App
from kivy.uix.widget import Widget
from kivy.properties import StringProperty

import threading
import os

def terminal_thread():
    os.system("roslaunch acsi_vrpn_client Wean_Motive.launch")

class LaunchSelector(Widget):
    def __init__(self, **kwargs):
        super(LaunchSelector, self).__init__(**kwargs)

    def launch_all(self):
        threading.Thread(target=terminal_thread,daemon=True).start()
        App.get_running_app().stop()

class LaunchApp(App):
    def build(self):
        
        return LaunchSelector()

if __name__ == '__main__':
    client_thread = threading.Thread(target=LaunchApp().run(),daemon=True)
    client_thread.start()

