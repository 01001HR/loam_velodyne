#ifndef __LOAM_BUILD_TRANSFORM_H__
#define __LOAM_BUILD_TRANSFORM_H__

#include <pcl/common/eigen.h>

Eigen::Affine3f getTransformationTRzRxRy(float tx, float ty, float tz, float rx, float ry, float rz);

Eigen::Affine3f getTransformationTRzRxRy(const float *dof, float scale);

Eigen::Affine3f getTransformationRyRxRzT(float tx, float ty, float tz, float rx, float ry, float rz);

Eigen::Affine3f getTransformationRyRxRzT(const float *dof);

#endif