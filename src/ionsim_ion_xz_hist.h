#ifndef __IONSIM_ION_XZ_HIST_H_INCLUDED__
#define __IONSIM_ION_XZ_HIST_H_INCLUDED__

#include <string>
#include <vector>
#include "ionsim_process_classes.h"

std::string _getion(unsigned int step);
/* Hist2D ion_xz_hist(std::string filename, int xbins, int step, std::vector<unsigned long long> &hist, long &histsize, int &n_field_z); */
Hist2D ion_xz_hist(std::string filename, int xbins, int step);

#endif
