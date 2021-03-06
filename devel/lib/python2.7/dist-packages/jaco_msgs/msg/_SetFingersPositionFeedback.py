"""autogenerated by genpy from jaco_msgs/SetFingersPositionFeedback.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import jaco_msgs.msg

class SetFingersPositionFeedback(genpy.Message):
  _md5sum = "bdbf88b45be6ef8cd65f0b4fc487d49d"
  _type = "jaco_msgs/SetFingersPositionFeedback"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
# Feedback message
FingerPosition fingers


================================================================================
MSG: jaco_msgs/FingerPosition
float32 finger1
float32 finger2
float32 finger3

"""
  __slots__ = ['fingers']
  _slot_types = ['jaco_msgs/FingerPosition']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       fingers

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(SetFingersPositionFeedback, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.fingers is None:
        self.fingers = jaco_msgs.msg.FingerPosition()
    else:
      self.fingers = jaco_msgs.msg.FingerPosition()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_struct_3f.pack(_x.fingers.finger1, _x.fingers.finger2, _x.fingers.finger3))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.fingers is None:
        self.fingers = jaco_msgs.msg.FingerPosition()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.fingers.finger1, _x.fingers.finger2, _x.fingers.finger3,) = _struct_3f.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_struct_3f.pack(_x.fingers.finger1, _x.fingers.finger2, _x.fingers.finger3))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.fingers is None:
        self.fingers = jaco_msgs.msg.FingerPosition()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.fingers.finger1, _x.fingers.finger2, _x.fingers.finger3,) = _struct_3f.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_3f = struct.Struct("<3f")
