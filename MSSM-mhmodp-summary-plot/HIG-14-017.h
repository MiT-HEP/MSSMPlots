#include "TGraph.h"

TGraph* HIG_14_017_obs(bool filled){
  TGraph* graph = new TGraph();
  graph->SetPoint( 0,   100.0, 14.2);
  graph->SetPoint( 1,   140.0, 22.4);
  graph->SetPoint( 2,   160.0, 18.2);
  graph->SetPoint( 3,   200.0, 14.8);
  graph->SetPoint( 4,   300.0, 34.1);
  graph->SetPoint( 5,   350.0, 37.1);
  graph->SetPoint( 6,   400.0, 34.4);
  graph->SetPoint( 7,   500.0, 50.0);
  if(filled){
    graph->SetPoint( 8,   500.0, 65.0);
    graph->SetPoint( 9,   100.0, 65.0);
    graph->SetPoint(10,   100.0, 14.2);
  }
  return graph;
}

TGraph* HIG_14_017_exp(){
  TGraph* graph = new TGraph();
  graph->SetPoint( 0,   100.0, 19.8);
  graph->SetPoint( 1,   140.0, 19.6);
  graph->SetPoint( 2,   160.0, 18.0);
  graph->SetPoint( 3,   200.0, 19.2);
  graph->SetPoint( 4,   300.0, 24.8);
  graph->SetPoint( 5,   350.0, 30.0);
  graph->SetPoint( 6,   400.0, 36.5);
  graph->SetPoint( 7,   500.0, 53.5);
  return graph;
}
