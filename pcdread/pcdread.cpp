#include <iostream>
#include <pcl/io/pcd_io.h>
#include <pcl/point_types.h>


int main ()
{
  pcl::PointCloud<pcl::PointXYZ>::Ptr cloud (new pcl::PointCloud<pcl::PointXYZ>);
  if (pcl::io::loadPCDFile<pcl::PointXYZ> ("/home/dell/PointCloudEx/pcdread/drill_1.6mm_0_cyb.pcd", *cloud) == -1) //* load the file
  {
    PCL_ERROR ("Couldn't read file drill_1.6mm_0_cyb.pcd \n");
    return (-1);
  }

/*
//Read a PCLPointCloud2 blob(available only in PCL 1.x).
  pcl::PCLPointCloud2 cloud_blob;
  pcl::io::loadPCDFile("../test_pcd.pcd", cloud_blob);
  pcl::fromPCLPointCloud2(cloud_blob, *cloud);//* convert from pcl/PCLPointCloud2 to pcl::PointCloud<T>
*/

  std::cout << "Loaded "
            << cloud->width * cloud->height
            << " data points from drill_1.6mm_0_cyb.pcd with the following fields: "
            << std::endl;
  for (const auto& point: *cloud)
    std::cout << "    " << point.x
              << " "    << point.y
              << " "    << point.z << std::endl;
  return (0);
}


/* // 下面的代码可以把ply转pcd? 但大小明显不对劲(经测试，有一堆nan数据)
#include <iostream>
using namespace std;

#include <pcl/point_types.h> //打开关闭pcd类定义头文件
#include <pcl/io/pcd_io.h> //所有点类型定义头文件
#include <pcl/io/ply_io.h> //打开关闭ply类定义头文件

int main()
{
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud(new pcl::PointCloud<pcl::PointXYZ>);
    pcl::PLYReader reader;
    reader.read<pcl::PointXYZ>("/home/dell/PointCloudEx/ply2pcd/drill_1.6mm_0_cyb.ply", *cloud);
    pcl::io::savePCDFile("/home/dell/PointCloudEx/ply2pcd/test.pcd",*cloud);

    // std::cout<<"Hello World!"<<std::endl;

    return 0;
} */