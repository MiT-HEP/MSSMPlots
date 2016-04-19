#include "TGraph.h"

TGraph* HIG_14_029_obs_upper(bool filled){
  TGraph* graph = new TGraph();
  graph->SetPoint( 0,   89,  6.80);
  graph->SetPoint( 1,   90,  6.80);
  graph->SetPoint( 2,  100,  7.30);
  graph->SetPoint( 3,  120,  3.73);
  graph->SetPoint( 4,  130,  3.67);
  graph->SetPoint( 5,  140,  3.02);
  graph->SetPoint( 6,  160,  3.29);
  graph->SetPoint( 7,  180,  4.49);
  graph->SetPoint( 8,  200,  4.95);
  graph->SetPoint( 9,  250,  7.23);
  graph->SetPoint(10,  300,  9.53);
  graph->SetPoint(11,  350, 14.05);
  graph->SetPoint(12,  400, 19.16);
  graph->SetPoint(13,  450, 19.45);
  graph->SetPoint(14,  500, 20.94);
  graph->SetPoint(15,  600, 26.66);
  graph->SetPoint(16,  700, 33.65);
  graph->SetPoint(17,  800, 42.17);
  graph->SetPoint(18,  900, 49.67);
  graph->SetPoint(19,  950, 60.00);
  if(filled){
     graph->SetPoint(20,  950, 65.00);
     graph->SetPoint(21,   89, 65.00);
     graph->SetPoint(22,   89,  6.80);
  }
  return graph;
}

TGraph* HIG_14_029_obs_lower(){  
  TGraph* graph = new TGraph();
  graph->SetPoint( 0,  120, 0.00);
  graph->SetPoint( 1,  130, 1.17);
  graph->SetPoint( 2,  140, 1.51);
  graph->SetPoint( 3,  160, 0.00);
  return graph;
}

TGraph* HIG_14_029_exp_upper(){
  TGraph* graph = new TGraph();
  graph->SetPoint( 0,   89,  6.65);
  graph->SetPoint( 1,   90,  6.65);
  graph->SetPoint( 2,  100,  6.88);
  graph->SetPoint( 3,  120,  3.92);
  graph->SetPoint( 4,  130,  3.81);
  graph->SetPoint( 5,  140,  3.50);
  graph->SetPoint( 6,  160,  2.03);
  graph->SetPoint( 7,  180,  4.51);
  graph->SetPoint( 8,  200,  5.13);
  graph->SetPoint( 9,  250,  7.95);
  graph->SetPoint(10,  300,  9.63);
  graph->SetPoint(11,  350, 12.24);
  graph->SetPoint(12,  400, 14.62);
  graph->SetPoint(13,  450, 18.41);
  graph->SetPoint(14,  500, 19.69);
  graph->SetPoint(15,  600, 24.69);
  graph->SetPoint(16,  700, 31.28);
  graph->SetPoint(17,  800, 38.48);
  graph->SetPoint(18,  900, 45.36);
  graph->SetPoint(19,  950, 60.00);
  return graph;
}

TGraph* HIG_14_029_exp_lower(){  
  TGraph* graph = new TGraph();
  graph->SetPoint( 0,   90, 1.34);
  graph->SetPoint( 1,  100, 1.10);
  graph->SetPoint( 2,  120, 0.00);
  graph->SetPoint( 3,  130, 1.08);
  graph->SetPoint( 4,  140, 1.29);
  graph->SetPoint( 5,  160, 0.00);
  graph->SetPoint( 6,  180, 2.87);
  graph->SetPoint( 7,  200, 2.46);
  graph->SetPoint( 8,  250, 1.39);
  graph->SetPoint( 9,  300, 0.00);
  return graph;
}
