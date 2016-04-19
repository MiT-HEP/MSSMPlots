#include "TGraph.h"

TGraph* HIG_14_034_obs(bool filled){
  TGraph* graph = new TGraph();
  graph->SetPoint( 0,325,2.456024139);
  graph->SetPoint( 1,315.9565669,2.5);
  graph->SetPoint( 2,314.7058829,2.504104017);
  graph->SetPoint( 3,304.4117658,2.561315637);
  graph->SetPoint( 4,294.1176488,2.688361118);
  graph->SetPoint( 5,290.7147489,2.714284381);
  graph->SetPoint( 6,283.8235317,2.746652031);
  graph->SetPoint( 7,278.6177208,2.714284381);
  graph->SetPoint( 8,273.5294146,2.668301089);
  graph->SetPoint( 9,263.2352975,2.526217446);
  graph->SetPoint(10,261.9966113,2.5);
  graph->SetPoint(11,252.9411805,2.350762426);
  graph->SetPoint(12,250.6791715,2.285715619);
  graph->SetPoint(13,242.6470634,2.124759561);
  graph->SetPoint(14,241.1517847,2.071431238);
  graph->SetPoint(15,232.3529463,1.858635756);
  graph->SetPoint(16,232.3361577,1.857146857);
  graph->SetPoint(17,231.445877,1.642862476);
  graph->SetPoint(18,224.544885,1.428578095);
  graph->SetPoint(19,222.0588292,1.370696283);
  graph->SetPoint(20,220.946581,1.214293714);
  graph->SetPoint(21,220.3557239,0.9035813619);
  graph->SetPoint(22,222.0588292,0.9035701394);
  graph->SetPoint(23,232.3529463,0.903570112);
  graph->SetPoint(24,242.6470634,0.903570112);
  graph->SetPoint(25,252.9411805,0.903570112);
  graph->SetPoint(26,263.2352975,0.903570112);
  graph->SetPoint(27,273.5294146,0.903570112);
  graph->SetPoint(28,283.8235317,0.903570112);
  graph->SetPoint(29,294.1176488,0.903570112);
  graph->SetPoint(30,304.4117658,0.903570112);
  graph->SetPoint(31,314.7058829,0.903570112);
  graph->SetPoint(32,325,0.903570112);
  graph->SetPoint(33,335.2941171,0.903570112);
  graph->SetPoint(34,342.9754277,0.9035813619);
  graph->SetPoint(35,342.1087087,1.214293714);
  graph->SetPoint(36,340.8390227,1.428578095);
  graph->SetPoint(37,338.9084067,1.642862476);
  graph->SetPoint(38,338.489077,1.857146857);
  graph->SetPoint(39,337.2106665,2.071431238);
  graph->SetPoint(40,336.642159,2.285715619);
  graph->SetPoint(41,335.3114965,2.5);
  graph->SetPoint(42,335.2941171,2.501887936);
  graph->SetPoint(43,334.6827596,2.5);
  graph->SetPoint(44,325,2.456024139);
  if(filled){
    // eventually do something
  }
  return graph;
}

TGraph* HIG_14_034_exp(){
  TGraph* graph = new TGraph();
  graph->SetPoint( 0, 335.2941171 , 2.506202898);
  graph->SetPoint( 1, 334.1192826 , 2.5);
  graph->SetPoint( 2, 325         , 2.440706402);
  graph->SetPoint( 3, 314.7058829 , 2.407695835);
  graph->SetPoint( 4, 304.4117658 , 2.367517052);
  graph->SetPoint( 5, 294.1176488 , 2.345302399);
  graph->SetPoint( 6, 283.8235317 , 2.331856803);
  graph->SetPoint( 7, 273.5294146 , 2.309898552);
  graph->SetPoint( 8, 263.2352975 , 2.288308256);
  graph->SetPoint( 9, 261.9151853 , 2.285715619);
  graph->SetPoint(10, 252.9411805 , 2.241520426);
  graph->SetPoint(11, 242.6470634 , 2.146971806);
  graph->SetPoint(12, 237.9577472 , 2.071431238);
  graph->SetPoint(13, 232.3529463 , 1.968358766);
  graph->SetPoint(14, 230.8125437 , 1.857146857);
  graph->SetPoint(15, 228.6276672 , 1.642862476);
  graph->SetPoint(16, 222.0588292 , 1.489728533);
  graph->SetPoint(17, 221.0604629 , 1.428578095);
  graph->SetPoint(18, 219.8237254 , 1.214293714);
  graph->SetPoint(19, 217.279915  , 0.9035813619);
  graph->SetPoint(20, 222.0588292 , 0.9035701125);
  graph->SetPoint(21, 232.3529463 , 0.903570112);
  graph->SetPoint(22, 242.6470634 , 0.903570112);
  graph->SetPoint(23, 252.9411805 , 0.903570112);
  graph->SetPoint(24, 263.2352975 , 0.903570112);
  graph->SetPoint(25, 273.5294146 , 0.903570112);
  graph->SetPoint(26, 283.8235317 , 0.903570112);
  graph->SetPoint(27, 294.1176488 , 0.903570112);
  graph->SetPoint(28, 304.4117658 , 0.903570112);
  graph->SetPoint(29, 314.7058829 , 0.903570112);
  graph->SetPoint(30, 325         , 0.903570112);
  graph->SetPoint(31, 335.2941171 , 0.903570112);
  graph->SetPoint(32, 345.0302352 , 0.9035813619);
  graph->SetPoint(33, 343.7355972 , 1.214293714);
  graph->SetPoint(34, 341.9752696 , 1.428578095);
  graph->SetPoint(35, 339.6807546 , 1.642862476);
  graph->SetPoint(36, 339.1830534 , 1.857146857);
  graph->SetPoint(37, 337.8936396 , 2.071431238);
  graph->SetPoint(38, 337.0266928 , 2.285715619);
  graph->SetPoint(39, 335.3571247 , 2.5);
  graph->SetPoint(40, 335.2941171 , 2.506202898);
  return graph;
}
