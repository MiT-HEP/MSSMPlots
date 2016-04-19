#include "TGraph.h"

TGraph* Eligibility(){
  TGraph* graph = new TGraph();
  graph->SetPoint( 0,  128., 10.);
  graph->SetPoint( 1, 1150., 10.);
  graph->SetPoint( 2, 1150., 62.);
  graph->SetPoint( 3,  128., 62.);
  graph->SetPoint( 4,  128., 10.);
  return graph;
}

TGraph* Eligibility_lower(){
  TGraph* graph = new TGraph();
  graph->SetPoint( 0, 128., 0.5);
  graph->SetPoint( 1, 130., 5.7);
  graph->SetPoint( 2, 135., 2.8);
  graph->SetPoint( 3, 140., 1.9);
  graph->SetPoint( 4, 145., 1.4);
  graph->SetPoint( 5, 150., 1.1);
  graph->SetPoint( 6, 155., 0.9);
  graph->SetPoint( 7, 155., 0.5);
  graph->SetPoint( 8, 128., 0.5);
  return graph;
}
