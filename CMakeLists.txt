cmake_minimum_required(VERSION 3.5)

project(Slicer_FFT)

#-----------------------------------------------------------------------------
# Extension meta-information
set(EXTENSION_HOMEPAGE "http://slicer.org/slicerWiki/index.php/Documentation/Nightly/Extensions/Slicer_FFT")
set(EXTENSION_CATEGORY "Frequency")
set(EXTENSION_CONTRIBUTORS "Pablo Hernandez-Cerdan (Kitware, Inc.)")
set(EXTENSION_DESCRIPTION "Methods for conversion of images to the frequency domain (Fast Fourier Transform)
and filter for manipulation of images in the frequency domain, such as low and high frequency filters,
and band pass filters. ")
set(EXTENSION_ICONURL "http://www.example.com/Slicer/Extensions/Slicer_FFT.png")
set(EXTENSION_SCREENSHOTURLS "http://www.example.com/Slicer/Extensions/Slicer_FFT/Screenshots/1.png")
set(EXTENSION_DEPENDS "NA") # Specified as a space separated string, a list or 'NA' if any

#-----------------------------------------------------------------------------
# Extension dependencies
find_package(Slicer REQUIRED)
include(${Slicer_USE_FILE})

#-----------------------------------------------------------------------------
# Extension modules
add_subdirectory(FFT)
add_subdirectory(FrequencyFiltering)
## NEXT_MODULE

#-----------------------------------------------------------------------------
include(${Slicer_EXTENSION_GENERATE_CONFIG})
include(${Slicer_EXTENSION_CPACK})
