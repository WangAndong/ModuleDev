//You need to modify this file.

#ifndef SENSORINTERNALEVENT_ROS_SENSOR_CAMERA_PARAMSDATA_H
#define SENSORINTERNALEVENT_ROS_SENSOR_CAMERA_PARAMSDATA_H

#include<RobotSDK_Global.h>

/*! \defgroup SensorInternalEvent_ROS_Sensor_Camera_ParamsData SensorInternalEvent_ROS_Sensor_Camera_ParamsData
	\ingroup SensorInternalEvent_ROS_Sensor_Camera
	\brief SensorInternalEvent_ROS_Sensor_Camera_ParamsData defines the ParamsData in SensorInternalEvent_ROS_Sensor_Camera.
*/

/*! \addtogroup SensorInternalEvent_ROS_Sensor_Camera_ParamsData
	@{
*/

/*! \file SensorInternalEvent_ROS_Sensor_Camera_ParamsData.h
	 Defines the ParamsData of SensorInternalEvent_ROS_Sensor_Camera
*/

//*******************Please add other headers below*******************
#include<Eigen/Dense>
#include<opencv2/opencv.hpp>

//There is no input data headers.

/*! \def SensorInternalEvent_ROS_Sensor_Camera_INPUTPORTSSIZE
	\brief Defines input port(s) info: number=0
*/
#define SensorInternalEvent_ROS_Sensor_Camera_INPUTPORTSSIZE QList<int>()

//The Params is defined as below
/*! \class SensorInternalEvent_ROS_Sensor_Camera_Params 
	\brief The Params of SensorInternalEvent_ROS_Sensor_Camera.
	\details **Please add details below**

*/
class ROBOTSDK_OUTPUT SensorInternalEvent_ROS_Sensor_Camera_Params 
{
public:
	/*! \fn SensorInternalEvent_ROS_Sensor_Camera_Params()
		\brief The constructor of SensorInternalEvent_ROS_Sensor_Camera_Params. [required]
		\details ****Please add details below****

	*/
	SensorInternalEvent_ROS_Sensor_Camera_Params() 
	{
        cameracalibfile="#(CamCalibFile)";
        cameraid=0;
        size.width=1024;
        size.height=768;
        cameramat=cv::Mat(3,3,CV_32F);
        cameramatstr="CameraMat";
        distcoef=cv::Mat(1,5,CV_32F);
        distcoefstr="DistCoef";
        cameracalibmat=cv::Mat(4,4,CV_32F);
        cameracalibmatstr="CameraCalibMat";
	}
	/*! \fn ~SensorInternalEvent_ROS_Sensor_Camera_Params()
		\brief The destructor of SensorInternalEvent_ROS_Sensor_Camera_Params. [required]
		\details *****Please add details below*****

	*/
	~SensorInternalEvent_ROS_Sensor_Camera_Params() 
	{
		
	}
public:
	//*******************Please add variables below*******************
    QString cameracalibfile;
    int cameraid;
    cv::Size size;
    cv::Mat cameramat;
    QString cameramatstr;
    cv::Mat distcoef;
    QString distcoefstr;
    cv::Mat cameracalibmat;
    QString cameracalibmatstr;
};

//The Output Data is defined as below
/*! \class SensorInternalEvent_ROS_Sensor_Camera_Data 
	\brief The Data of SensorInternalEvent_ROS_Sensor_Camera.
	\details **Please add details below**

*/
class ROBOTSDK_OUTPUT SensorInternalEvent_ROS_Sensor_Camera_Data 
{
public:
	/*! \fn SensorInternalEvent_ROS_Sensor_Camera_Data()
		\brief The constructor of SensorInternalEvent_ROS_Sensor_Camera_Data. [required]
		\details ****Please add details below****

	*/
	SensorInternalEvent_ROS_Sensor_Camera_Data() 
	{
		
	}
	/*! \fn ~SensorInternalEvent_ROS_Sensor_Camera_Data()
		\brief The destructor of SensorInternalEvent_ROS_Sensor_Camera_Data. [required]
		\details *****Please add details below*****

	*/
	~SensorInternalEvent_ROS_Sensor_Camera_Data() 
	{
		
	}
public:
	//*******************Please add variables below*******************
    QTime timestamp;
    cv::Mat image;
};

/*! \def SensorInternalEvent_ROS_Sensor_Camera_OUTPUTPORTSNUMBER
	\brief Defines output port(s) info: number = 1.
*/
#define SensorInternalEvent_ROS_Sensor_Camera_OUTPUTPORTSNUMBER 1

/*! @}*/ 

#endif
