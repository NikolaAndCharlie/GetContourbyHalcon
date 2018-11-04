/***********************************************************
 * File generated by the HALCON-Compiler hcomp version 12.0
 * Usage: Interface to C++
 *
 * Software by: MVTec Software GmbH, www.mvtec.com
 ***********************************************************/


#ifndef HCPP_HSOCKET
#define HCPP_HSOCKET

namespace HalconCpp
{

// Represents an instance of a socket connection.
class LIntExport HSocket : public HToolBase
{

public:

  // Create an uninitialized instance
  HSocket():HToolBase() {}

  // Copy constructor
  HSocket(const HSocket& source) : HToolBase(source) {}

  // Create HSocket from handle, taking ownership
  explicit HSocket(Hlong handle);

  // Set new handle, taking ownership
  void SetHandle(Hlong handle);



/*****************************************************************************
 * Operator-based class constructors
 *****************************************************************************/

  // open_socket_connect: Open a socket and connect it to an accepting socket.
  explicit HSocket(const HString& HostName, Hlong Port, const HTuple& GenParamName, const HTuple& GenParamValue);

  // open_socket_connect: Open a socket and connect it to an accepting socket.
  explicit HSocket(const HString& HostName, Hlong Port, const HString& GenParamName, const HString& GenParamValue);

  // open_socket_connect: Open a socket and connect it to an accepting socket.
  explicit HSocket(const char* HostName, Hlong Port, const char* GenParamName, const char* GenParamValue);

  // open_socket_accept: Open a socket that accepts connection requests.
  explicit HSocket(Hlong Port, const HTuple& GenParamName, const HTuple& GenParamValue);

  // open_socket_accept: Open a socket that accepts connection requests.
  explicit HSocket(Hlong Port, const HString& GenParamName, const HString& GenParamValue);

  // open_socket_accept: Open a socket that accepts connection requests.
  explicit HSocket(Hlong Port, const char* GenParamName, const char* GenParamValue);




  /***************************************************************************
   * Operators                                                               *
   ***************************************************************************/

  // Receive an image over a socket connection.
  HImage ReceiveImage() const;

  // Send an image over a socket connection.
  void SendImage(const HImage& Image) const;

  // Receive regions over a socket connection.
  HRegion ReceiveRegion() const;

  // Send regions over a socket connection.
  void SendRegion(const HRegion& Region) const;

  // Receive an XLD object over a socket connection.
  HXLD ReceiveXld() const;

  // Send an XLD object over a socket connection.
  void SendXld(const HXLD& XLD) const;

  // Receive a tuple over a socket connection.
  HTuple ReceiveTuple() const;

  // Send a tuple over a socket connection.
  void SendTuple(const HTuple& Tuple) const;

  // Send a tuple over a socket connection.
  void SendTuple(const HString& Tuple) const;

  // Send a tuple over a socket connection.
  void SendTuple(const char* Tuple) const;

  // Receive arbitrary data from external devices or applications using a generic socket connection.
  HTuple ReceiveData(const HTuple& Format, HTuple* From) const;

  // Receive arbitrary data from external devices or applications using a generic socket connection.
  HTuple ReceiveData(const HString& Format, HString* From) const;

  // Receive arbitrary data from external devices or applications using a generic socket connection.
  HTuple ReceiveData(const char* Format, HString* From) const;

  // Send arbitrary data to external devices or applications using a generic socket communication.
  void SendData(const HString& Format, const HTuple& Data, const HTuple& To) const;

  // Send arbitrary data to external devices or applications using a generic socket communication.
  void SendData(const HString& Format, const HString& Data, const HString& To) const;

  // Send arbitrary data to external devices or applications using a generic socket communication.
  void SendData(const char* Format, const char* Data, const char* To) const;

  // Get the value of a socket parameter.
  HTuple GetSocketParam(const HTuple& ParamName) const;

  // Get the value of a socket parameter.
  HTuple GetSocketParam(const HString& ParamName) const;

  // Get the value of a socket parameter.
  HTuple GetSocketParam(const char* ParamName) const;

  // Set a socket parameter.
  void SetSocketParam(const HTuple& ParamName, const HTuple& ParamValue) const;

  // Set a socket parameter.
  void SetSocketParam(const HString& ParamName, const HString& ParamValue) const;

  // Set a socket parameter.
  void SetSocketParam(const char* ParamName, const char* ParamValue) const;

  // Determine the HALCON data type of the next socket data.
  HString GetNextSocketDataType() const;

  // Get the socket descriptor of a socket used by the operating system.
  Hlong GetSocketDescriptor() const;

  // Get the timeout of a socket.
  HTuple GetSocketTimeout() const;

  // Set the timeout of a socket.
  void SetSocketTimeout(const HTuple& Timeout) const;

  // Set the timeout of a socket.
  void SetSocketTimeout(double Timeout) const;

  // Close all opened sockets.
  static void CloseAllSockets();

  // Accept a connection request on a listening socket of the protocol type 'HALCON' or 'TCP'/'TCP4'/'TCP6'.
  HSocket SocketAcceptConnect(const HString& Wait) const;

  // Accept a connection request on a listening socket of the protocol type 'HALCON' or 'TCP'/'TCP4'/'TCP6'.
  HSocket SocketAcceptConnect(const char* Wait) const;

  // Open a socket and connect it to an accepting socket.
  void OpenSocketConnect(const HString& HostName, Hlong Port, const HTuple& GenParamName, const HTuple& GenParamValue);

  // Open a socket and connect it to an accepting socket.
  void OpenSocketConnect(const HString& HostName, Hlong Port, const HString& GenParamName, const HString& GenParamValue);

  // Open a socket and connect it to an accepting socket.
  void OpenSocketConnect(const char* HostName, Hlong Port, const char* GenParamName, const char* GenParamValue);

  // Open a socket that accepts connection requests.
  void OpenSocketAccept(Hlong Port, const HTuple& GenParamName, const HTuple& GenParamValue);

  // Open a socket that accepts connection requests.
  void OpenSocketAccept(Hlong Port, const HString& GenParamName, const HString& GenParamValue);

  // Open a socket that accepts connection requests.
  void OpenSocketAccept(Hlong Port, const char* GenParamName, const char* GenParamValue);

  // Receive a serialized item over a socket connection.
  HSerializedItem ReceiveSerializedItem() const;

  // Send a serialized item over a socket connection.
  void SendSerializedItem(const HSerializedItem& SerializedItemHandle) const;

};

// forward declarations and types for internal array implementation

template<class T> class HSmartPtr;
template<class T> class HToolArrayRef;

typedef HToolArrayRef<HSocket> HSocketArrayRef;
typedef HSmartPtr< HSocketArrayRef > HSocketArrayPtr;


// Represents multiple tool instances
class LIntExport HSocketArray : public HToolArray
{

public:

  // Create empty array
  HSocketArray();

  // Create array from native array of tool instances
  HSocketArray(HSocket* classes, Hlong length);

  // Copy constructor
  HSocketArray(const HSocketArray &tool_array);

  // Destructor
  virtual ~HSocketArray();

  // Assignment operator
  HSocketArray &operator=(const HSocketArray &tool_array);

  // Clears array and all tool instances
  virtual void Clear();

  // Get array of native tool instances
  const HSocket* Tools() const;

  // Get number of tools
  virtual Hlong Length() const;

  // Create tool array from tuple of handles
  virtual void SetFromTuple(const HTuple& handles);

  // Get tuple of handles for tool array
  virtual HTuple ConvertToTuple() const;

protected:

// Smart pointer to internal data container
   HSocketArrayPtr *mArrayPtr;
};

}

#endif