import changer
changer.printer()   # First Version
changer.message = 'after editing'
from imp import reload
reload(changer)
changer.printer()