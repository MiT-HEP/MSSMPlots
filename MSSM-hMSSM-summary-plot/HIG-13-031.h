#include "TGraph.h"

#include "mssm_xs_tools.h"
#include "mssm_xs_tools.C"

void setPoint(TGraph* g, int bin, double mH, double tanb){
  mssm_xs_tools model("hMSSM_13TeV.root", true, 0);
  g->SetPoint(bin,  model.mass2mA("H", mH, tanb), tanb);
  return;
}

TGraph* HIG_13_031_obs(bool filled){
  TGraph* graph = new TGraph();
  //setPoint(graph,  0, 150, 4);            /* mH range not valid in model */
  //setPoint(graph,  1, 155, 4.411937714);  /* mH range not valid in model */
  //setPoint(graph,  2, 160, 4.170994759);  /* mH range not valid in model */
  //setPoint(graph,  3, 165, 4.577766418);  /* mH range not valid in model */
  setPoint(graph,  0, 170, 5.13020134);
  setPoint(graph,  1, 175, 5.689200401);
  setPoint(graph,  2, 180, 5.871060371);
  setPoint(graph,  3, 185, 5.758318901);
  setPoint(graph,  4, 190, 4.696572304);
  setPoint(graph,  5, 195, 4.673904896);
  setPoint(graph,  6, 200, 4.604906559);
  setPoint(graph,  7, 205, 4.544465542);
  setPoint(graph,  8, 210, 4.546611309);
  setPoint(graph,  9, 215, 4.338678837);
  setPoint(graph, 10, 220, 3.960102797);
  setPoint(graph, 11, 225, 3.724354267);
  setPoint(graph, 12, 230, 3.562895298);
  setPoint(graph, 13, 235, 3.566779613);
  setPoint(graph, 14, 240, 3.410713434);
  setPoint(graph, 15, 245, 3.233644247);
  setPoint(graph, 16, 250, 3.12008667);
  setPoint(graph, 17, 255, 2.82930541);
  setPoint(graph, 18, 260, 2.433147907);
  setPoint(graph, 19, 265, 1.990844369);
  setPoint(graph, 20, 270, 1.926228404);
  setPoint(graph, 21, 275, 1.885432959);
  setPoint(graph, 22, 280, 1.883225918);
  setPoint(graph, 23, 285, 1.91373992);
  setPoint(graph, 24, 290, 1.957099438);
  setPoint(graph, 25, 295, 1.998782039);
  setPoint(graph, 26, 300, 2.209608078);
  setPoint(graph, 27, 305, 2.133459568);
  setPoint(graph, 28, 310, 1.964042306);
  setPoint(graph, 29, 315, 1.845023394);
  setPoint(graph, 30, 320, 1.681425333);
  setPoint(graph, 31, 325, 1.52854526);
  setPoint(graph, 32, 330, 1.424318314);
  setPoint(graph, 33, 335, 1.367851496);
  setPoint(graph, 34, 340, 1.35569489);
  setPoint(graph, 35, 345, 1.376471162);
  setPoint(graph, 36, 350, 1.335745215);
  setPoint(graph, 37, 355, 1.125838995);
  setPoint(graph, 38, 360, 1);
  if(filled){
    // eventiually do something here
    setPoint(graph, 39, 360, 1.0);
    graph->SetPoint(40, 300, 1.0);
    graph->SetPoint(41, 158, 1.0);
  }
  return graph;
}

TGraph* HIG_13_031_exp(){
  TGraph* graph = new TGraph();
  //setPoint(graph, 0, 145, 5.163928509);  /* mH range not valid in model */
  //setPoint(graph, 1, 150, 4.869160175);  /* mH range not valid in model */
  //setPoint(graph, 2, 155, 4.747014999);  /* mH range not valid in model */
  //setPoint(graph, 3, 160, 4.756792545);  /* mH range not valid in model */
  //setPoint(graph, 4, 165, 4.837520123);  /* mH range not valid in model */
  setPoint(graph, 0, 170, 4.936407089);
  setPoint(graph, 1, 175, 5.458359241);
  setPoint(graph, 2, 180, 5.579612732);
  setPoint(graph, 3, 185, 5.396721363);
  setPoint(graph, 4, 190, 4.907488346);
  setPoint(graph, 5, 195, 4.66044569);
  setPoint(graph, 6, 200, 4.777550697);
  setPoint(graph, 7, 205, 4.538911819);
  setPoint(graph, 8, 210, 4.247211456);
  setPoint(graph, 9, 215, 4.02061367);
  setPoint(graph,10, 220, 3.91941452);
  setPoint(graph,11, 225, 3.841246128);
  setPoint(graph,12, 230, 3.755143642);
  setPoint(graph,13, 235, 3.642419577);
  setPoint(graph,14, 240, 3.052172899);
  setPoint(graph,15, 245, 2.623519659);
  setPoint(graph,16, 250, 2.427859545);
  setPoint(graph,17, 255, 2.314822674);
  setPoint(graph,18, 260, 2.260064363);
  setPoint(graph,19, 265, 2.24435997);
  setPoint(graph,20, 270, 2.24583292);
  setPoint(graph,21, 275, 2.237896681);
  setPoint(graph,22, 280, 2.192407608);
  setPoint(graph,23, 285, 2.113480091);
  setPoint(graph,24, 290, 2.011033535);
  setPoint(graph,25, 295, 1.988990784);
  setPoint(graph,26, 300, 1.975977659);
  setPoint(graph,27, 305, 1.958397388);
  setPoint(graph,28, 310, 1.938899875);
  setPoint(graph,29, 315, 1.920681596);
  setPoint(graph,30, 320, 1.908406973);
  setPoint(graph,31, 325, 1.909370184);
  setPoint(graph,32, 330, 1.928954363);
  setPoint(graph,33, 335, 1.891192555);
  setPoint(graph,34, 340, 1.749025822);
  setPoint(graph,35, 345, 1.583756328);
  setPoint(graph,36, 350, 1.388099551);
  setPoint(graph,37, 355, 1.147586465);
  graph->SetPoint(38, 360, 0);
  return graph;
}
