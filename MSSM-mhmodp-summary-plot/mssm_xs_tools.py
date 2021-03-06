from ctypes import cdll
from ctypes import c_bool
from ctypes import c_uint
from ctypes import c_double

class mssm_xs_tools(object):
    """
    Class mssm_xs_tools:
      
    This is a python wrapper class to make the core functionality of mssm_xs_tools available also 
    in python. To make this functionality available for you the recommended steps are to compile 
    the mssm_xs_tools class in root (>.L mssm_xs_tools.C+) to produce the shared library object  
    (mssm_xs_tools_C.so) that has to be loaded into this python class at instantiation time.  
    """
    def __init__(self, filename, kINTERPOLATION, verbosity):
        ## pointer to the shared library containing the C wrapper functions
        self.lib = cdll.LoadLibrary('./mssm_xs_tools_C.so')
        ## pointer to the C++ object
        self.obj = self.lib.mssm_xs_tools_new(filename, c_bool(kINTERPOLATION), c_uint(verbosity))
        ## pointer to function mass
        self.mssm_xs_tools_mass = self.lib.mssm_xs_tools_mass
        self.mssm_xs_tools_mass.restype = c_double
        ## pointer to function mass2mA
        self.mssm_xs_tools_mass2mA = self.lib.mssm_xs_tools_mass2mA
        self.mssm_xs_tools_mass2mA.restype = c_double
        ## pointer to function width
        self.mssm_xs_tools_width = self.lib.mssm_xs_tools_width
        self.mssm_xs_tools_width.restype = c_double
        ## pointer to function br
        self.mssm_xs_tools_br = self.lib.mssm_xs_tools_br
        self.mssm_xs_tools_br.restype = c_double
        ## pointer to function xsec
        self.mssm_xs_tools_xsec = self.lib.mssm_xs_tools_xsec
        self.mssm_xs_tools_xsec.restype = c_double
         
    def mass(self, boson, mA, tanb):
        return self.mssm_xs_tools_mass(self.obj, boson, c_double(mA), c_double(tanb))

    def mass2mA(self, boson, m, tanb):
        return self.mssm_xs_tools_mass2mA(self.obj, boson, c_double(m), c_double(tanb))

    def width(self, boson, mA, tanb):
        return self.mssm_xs_tools_width(self.obj, boson, c_double(mA), c_double(tanb))

    def br(self, decay, mA, tanb):
        return self.mssm_xs_tools_br(self.obj, decay, c_double(mA), c_double(tanb))

    def xsec(self, mode, mA, tanb):
        return self.mssm_xs_tools_xsec(self.obj, mode, c_double(mA), c_double(tanb))



## and test the whole thing       
##mssm = mssm_xs_tools("mhmodp_mu200_13TeV.root", True, 0)
mssm = mssm_xs_tools("hMSSM_13TeV.root", True, 0)
mA   = 500
tanb =   5
print "m(H)         : ", mssm.mass ("H"                 , mA, tanb), "( for mA=", mssm.mass2mA("H",mssm.mass("H",mA,tanb), tanb), ")"
print "width(H)     : ", mssm.width("H"                 , mA, tanb)
print "br(H->tautau): ", mssm.br   ("H->tautau"         , mA, tanb)
print "br(H->hh)    : ", mssm.br   ("H->hh"             , mA, tanb)
print "---------------------------------------------------------------------------------"
print "                        central, scaleUp, scaleDown, pdfsasUp, pdfasDown"
print "xsec(gg->H           ):    x                                            ", mssm.xsec ("gg->H"                    , mA, tanb)
print "xsec(gg->H           ):            x                                    ", mssm.xsec ("gg->H::scaleUp"           , mA, tanb)
print "xsec(gg->H           ):                      x                          ", mssm.xsec ("gg->H::scaleDown"         , mA, tanb)
print "xsec(gg->H           ):                                 x               ", mssm.xsec ("gg->H::pdfasUp"           , mA, tanb)
print "xsec(gg->H           ):                                            x    ", mssm.xsec ("gg->H::pdfasDown"         , mA, tanb)
print "xsec(bb->H, Santander):    x                                            ", mssm.xsec ("bbSantander->H"           , mA, tanb)
print "xsec(bb->H, Santander):            x                                    ", mssm.xsec ("bbSantander->H::scaleUp"  , mA, tanb)
print "xsec(bb->H, Santander):                      x                          ", mssm.xsec ("bbSantander->H::scaleDown", mA, tanb)
print "xsec(bb->H, Santander):                                 x               ", mssm.xsec ("bbSantander->H::pdfasUp"  , mA, tanb)
print "xsec(bb->H, Santander):                                            x    ", mssm.xsec ("bbSantander->H::pdfasDown", mA, tanb)
print "xsec(bb->H, 5F       ):    x                                            ", mssm.xsec ("bb5F->H"                  , mA, tanb)
print "xsec(bb->H, 5F       ):            x                                    ", mssm.xsec ("bb5F->H::scaleUp"         , mA, tanb)
print "xsec(bb->H, 5F       ):                      x                          ", mssm.xsec ("bb5F->H::scaleDown"       , mA, tanb)
print "xsec(bb->H, 5F       ):                                 x               ", mssm.xsec ("bb5F->H::pdfasUp"         , mA, tanb)
print "xsec(bb->H, 5F       ):                                            x    ", mssm.xsec ("bb5F->H::pdfasDown"       , mA, tanb)
print "xsec(bb->H, 4F       ):    x                                            ", mssm.xsec ("bb4F->H"                  , mA, tanb)
print "xsec(bb->H, 4F       ):            x                                    ", mssm.xsec ("bb4F->H::scaleUp"         , mA, tanb)
print "xsec(bb->H, 4F       ):                      x                          ", mssm.xsec ("bb4F->H::scaleDown"       , mA, tanb)
print "---------------------------------------------------------------------------------"

