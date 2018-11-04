/***********************************************************
 * File generated by the HALCON-Compiler hcomp version 12.0
 * Usage: Interface to C++
 *
 * Software by: MVTec Software GmbH, www.mvtec.com
 ***********************************************************/


#ifndef HCPP_HSERIAL
#define HCPP_HSERIAL

namespace HalconCpp
{

// Represents an instance of a connection via a serial port.
class LIntExport HSerial : public HToolBase
{

public:

  // Create an uninitialized instance
  HSerial():HToolBase() {}

  // Copy constructor
  HSerial(const HSerial& source) : HToolBase(source) {}

  // Create HSerial from handle, taking ownership
  explicit HSerial(Hlong handle);

  // Set new handle, taking ownership
  void SetHandle(Hlong handle);



/*****************************************************************************
 * Operator-based class constructors
 *****************************************************************************/

  // open_serial: Open a serial device.
  explicit HSerial(const HString& PortName);

  // open_serial: Open a serial device.
  explicit HSerial(const char* PortName);




  /***************************************************************************
   * Operators                                                               *
   ***************************************************************************/

  // Clear the buffer of a serial connection.
  void ClearSerial(const HString& Channel) const;

  // Clear the buffer of a serial connection.
  void ClearSerial(const char* Channel) const;

  // Write to a serial connection.
  void WriteSerial(const HTuple& Data) const;

  // Write to a serial connection.
  void WriteSerial(Hlong Data) const;

  // Read from a serial device.
  HTuple ReadSerial(Hlong NumCharacters) const;

  // Get the parameters of a serial device.
  Hlong GetSerialParam(Hlong* DataBits, HString* FlowControl, HString* Parity, Hlong* StopBits, Hlong* TotalTimeOut, Hlong* InterCharTimeOut) const;

  // Set the parameters of a serial device.
  void SetSerialParam(const HTuple& BaudRate, const HTuple& DataBits, const HString& FlowControl, const HString& Parity, const HTuple& StopBits, const HTuple& TotalTimeOut, const HTuple& InterCharTimeOut) const;

  // Set the parameters of a serial device.
  void SetSerialParam(Hlong BaudRate, Hlong DataBits, const HString& FlowControl, const HString& Parity, Hlong StopBits, Hlong TotalTimeOut, Hlong InterCharTimeOut) const;

  // Set the parameters of a serial device.
  void SetSerialParam(Hlong BaudRate, Hlong DataBits, const char* FlowControl, const char* Parity, Hlong StopBits, Hlong TotalTimeOut, Hlong InterCharTimeOut) const;

  // Open a serial device.
  void OpenSerial(const HString& PortName);

  // Open a serial device.
  void OpenSerial(const char* PortName);

};

// forward declarations and types for internal array implementation

template<class T> class HSmartPtr;
template<class T> class HToolArrayRef;

typedef HToolArrayRef<HSerial> HSerialArrayRef;
typedef HSmartPtr< HSerialArrayRef > HSerialArrayPtr;


// Represents multiple tool instances
class LIntExport HSerialArray : public HToolArray
{

public:

  // Create empty array
  HSerialArray();

  // Create array from native array of tool instances
  HSerialArray(HSerial* classes, Hlong length);

  // Copy constructor
  HSerialArray(const HSerialArray &tool_array);

  // Destructor
  virtual ~HSerialArray();

  // Assignment operator
  HSerialArray &operator=(const HSerialArray &tool_array);

  // Clears array and all tool instances
  virtual void Clear();

  // Get array of native tool instances
  const HSerial* Tools() const;

  // Get number of tools
  virtual Hlong Length() const;

  // Create tool array from tuple of handles
  virtual void SetFromTuple(const HTuple& handles);

  // Get tuple of handles for tool array
  virtual HTuple ConvertToTuple() const;

protected:

// Smart pointer to internal data container
   HSerialArrayPtr *mArrayPtr;
};

}

#endif
