#
# Basic setup for throwing exceptions
#

# NOTE: for a real project, you should probably do something more
# complicated. Please follow the SW tutorial if you want to make your
# own package based on this.
#
# https://atlassoftwaredocs.web.cern.ch/ABtutorial/release_setup/


# Set the minimum required CMake version:
cmake_minimum_required( VERSION 3.2 FATAL_ERROR )

# get analysis base
find_package( AnalysisBase 21.2 REQUIRED )

# # Set up a work directory project:
atlas_project( WorkDir 1.0 USE AnalysisBase ${AnalysisBase_VERSION} )


##################################################################
# Package level things
##################################################################
#

# Set the name of the package:
atlas_subdir( test-throw )


# Build the test executable:
atlas_add_executable( test-throw test-throw.cxx )

# Set up grid magic. Atlas uses CPack to package up the local files
# and submit them to the grid. If you're not looking to run on the
# grid this is unneeded.
atlas_cpack_setup()
