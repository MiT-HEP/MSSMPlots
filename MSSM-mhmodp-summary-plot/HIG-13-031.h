#include "TGraph.h"

#include "mssm_xs_tools.h"
#include "mssm_xs_tools.C"

void setPoint(TGraph* g, int bin, double mH, double tanb){
  mssm_xs_tools model("mhmodp_mu200_13TeV.root", true, 0);
  g->SetPoint(bin,  model.mass2mA("H", mH, tanb), tanb);
  return;
}

TGraph* HIG_13_031_obs(bool filled){
  TGraph* graph = new TGraph();
  //setPoint(graph,  0, 145, 1.917071085);  /* mH range not valid in model */
  //setPoint(graph,  1, 146, 1.933802595);  /* mH range not valid in model */
  //setPoint(graph,  2, 147, 1.958736618);  /* mH range not valid in model */
  setPoint(graph,  0, 148, 1.990492552);
  setPoint(graph,  1, 149, 2.233121067);
  setPoint(graph,  2, 150, 2.477053921);
  setPoint(graph,  3, 151, 2.645290659);
  setPoint(graph,  4, 152, 2.757878175);
  setPoint(graph,  5, 153, 2.831348014);
  setPoint(graph,  6, 154, 2.877257522);
  setPoint(graph,  7, 155, 2.903320975);
  setPoint(graph,  8, 156, 2.915581843);
  setPoint(graph,  9, 157, 2.921588468);
  setPoint(graph, 10, 158, 2.928324471);
  setPoint(graph, 11, 159, 2.942500506);
  setPoint(graph, 12, 160, 2.971113928);
  setPoint(graph, 13, 161, 3.059788555);
  setPoint(graph, 14, 162, 3.219430023);
  setPoint(graph, 15, 163, 3.373412396);
  setPoint(graph, 16, 164, 3.516695561);
  setPoint(graph, 17, 165, 3.648740969);
  setPoint(graph, 18, 166, 3.770972748);
  setPoint(graph, 19, 167, 3.882953608);
  setPoint(graph, 20, 168, 3.985119227);
  setPoint(graph, 21, 169, 4.305708814);
  setPoint(graph, 22, 170, 4.56193402);
  setPoint(graph, 23, 171, 4.724698687);
  setPoint(graph, 24, 172, 4.826921712);
  setPoint(graph, 25, 173, 4.893196258);
  setPoint(graph, 26, 174, 4.939133161);
  setPoint(graph, 27, 175, 4.974368378);
  setPoint(graph, 28, 176, 5.011087745);
  setPoint(graph, 29, 177, 5.075753972);
  setPoint(graph, 30, 178, 5.133902545);
  setPoint(graph, 31, 179, 5.193517744);
  setPoint(graph, 32, 180, 5.263284632);
  setPoint(graph, 33, 181, 5.345468411);
  setPoint(graph, 34, 182, 5.412438957);
  setPoint(graph, 35, 183, 5.428720914);
  setPoint(graph, 36, 184, 5.35656042);
  setPoint(graph, 37, 185, 5.154680561);
  setPoint(graph, 38, 186, 4.88647599);
  setPoint(graph, 39, 187, 4.622930257);
  setPoint(graph, 40, 188, 4.332952425);
  setPoint(graph, 41, 189, 4.058172017);
  setPoint(graph, 42, 190, 3.907835305);
  setPoint(graph, 43, 191, 3.839139563);
  setPoint(graph, 44, 192, 3.820429873);
  setPoint(graph, 45, 193, 3.83545322);
  setPoint(graph, 46, 194, 3.866791948);
  setPoint(graph, 47, 195, 3.895962565);
  setPoint(graph, 48, 196, 3.907597615);
  setPoint(graph, 49, 197, 3.902506974);
  setPoint(graph, 50, 198, 3.885808949);
  setPoint(graph, 51, 199, 3.862946238);
  setPoint(graph, 52, 200, 3.839608937);
  setPoint(graph, 53, 201, 3.820745001);
  setPoint(graph, 54, 202, 3.807260985);
  setPoint(graph, 55, 203, 3.79902545);
  setPoint(graph, 56, 204, 3.696218012);
  setPoint(graph, 57, 205, 3.500829496);
  setPoint(graph, 58, 206, 3.296989441);
  setPoint(graph, 59, 207, 3.041581853);
  setPoint(graph, 60, 208, 2.734985662);
  setPoint(graph, 61, 209, 2.597409145);
  setPoint(graph, 62, 210, 2.500744892);
  setPoint(graph, 63, 211, 2.405520372);
  setPoint(graph, 64, 212, 2.303773623);
  setPoint(graph, 65, 213, 2.194297979);
  setPoint(graph, 66, 214, 2.077105993);
  setPoint(graph, 67, 215, 1.994158477);
  setPoint(graph, 68, 216, 1.977009897);
  setPoint(graph, 69, 217, 1.957974881);
  setPoint(graph, 70, 218, 1.937363299);
  setPoint(graph, 71, 219, 1.915470548);
  setPoint(graph, 72, 220, 1.892647286);
  setPoint(graph, 73, 221, 1.869261629);
  setPoint(graph, 74, 222, 1.845702226);
  setPoint(graph, 75, 223, 1.822375703);
  setPoint(graph, 76, 224, 1.799717555);
  setPoint(graph, 77, 225, 1.778178394);
  setPoint(graph, 78, 226, 1.758229797);
  setPoint(graph, 79, 227, 1.740374106);
  setPoint(graph, 80, 228, 1.725128944);
  setPoint(graph, 81, 229, 1.713038913);
  setPoint(graph, 82, 230, 1.7046736);
  setPoint(graph, 83, 231, 1.70046998);
  setPoint(graph, 84, 232, 1.700295729);
  setPoint(graph, 85, 233, 1.703786802);
  setPoint(graph, 86, 234, 1.686358401);
  setPoint(graph, 87, 235, 1.67157046);
  setPoint(graph, 88, 236, 1.670043184);
  setPoint(graph, 89, 237, 1.675746721);
  setPoint(graph, 90, 238, 1.686864726);
  setPoint(graph, 91, 239, 1.702203346);
  setPoint(graph, 92, 240, 1.721167713);
  setPoint(graph, 93, 241, 1.742977964);
  setPoint(graph, 94, 242, 1.766456644);
  setPoint(graph, 95, 243, 1.790668162);
  setPoint(graph, 96, 244, 1.814609791);
  setPoint(graph, 97, 245, 1.83720721);
  setPoint(graph, 98, 246, 1.857303524);
  setPoint(graph, 99, 247, 1.873656217);
  setPoint(graph,100, 248, 1.884932687);
  setPoint(graph,101, 249, 1.889167017);
  setPoint(graph,102, 250, 1.885356045);
  setPoint(graph,103, 251, 1.872173281);
  setPoint(graph,104, 252, 1.849723738);
  setPoint(graph,105, 253, 1.817723978);
  setPoint(graph,106, 254, 1.776315681);
  setPoint(graph,107, 255, 1.725715061);
  setPoint(graph,108, 256, 1.666215042);
  setPoint(graph,109, 257, 1.598183336);
  setPoint(graph,110, 258, 1.522055779);
  setPoint(graph,111, 259, 1.438343431);
  setPoint(graph,112, 260, 1.34763613);
  setPoint(graph,113, 261, 1.250616897);
  setPoint(graph,114, 262, 1.144655029);
  setPoint(graph,115, 263, 1.039030771);
  if(filled){
    setPoint(graph, 116, 263, 1.0);
    graph->SetPoint(117,  90, 1.0);
  }
  return graph;
}

TGraph* HIG_13_031_exp(){
  TGraph* graph = new TGraph();
  //setPoint(graph,  0, 145, 2.639416905);  /* mH range not valid in model */
  //setPoint(graph,  1, 146, 2.710873169);  /* mH range not valid in model */
  //setPoint(graph,  2, 147, 2.781256007);  /* mH range not valid in model */
  setPoint(graph,  0, 148, 2.842233973);
  setPoint(graph,  1, 149, 2.890597405);
  setPoint(graph,  2, 150, 2.925999984);
  setPoint(graph,  3, 151, 2.950202617);
  setPoint(graph,  4, 152, 2.96757931);
  setPoint(graph,  5, 153, 2.981848832);
  setPoint(graph,  6, 154, 2.995766101);
  setPoint(graph,  7, 155, 3.073276805);
  setPoint(graph,  8, 156, 3.184193604);
  setPoint(graph,  9, 157, 3.298108328);
  setPoint(graph, 10, 158, 3.407946158);
  setPoint(graph, 11, 159, 3.508814568);
  setPoint(graph, 12, 160, 3.597147736);
  setPoint(graph, 13, 161, 3.672645067);
  setPoint(graph, 14, 162, 3.736130823);
  setPoint(graph, 15, 163, 3.789288242);
  setPoint(graph, 16, 164, 3.834186519);
  setPoint(graph, 17, 165, 3.872919979);
  setPoint(graph, 18, 166, 3.907985555);
  setPoint(graph, 19, 167, 3.942575524);
  setPoint(graph, 20, 168, 3.97953811);
  setPoint(graph, 21, 169, 4.083007882);
  setPoint(graph, 22, 170, 4.241284424);
  setPoint(graph, 23, 171, 4.385352464);
  setPoint(graph, 24, 172, 4.511930154);
  setPoint(graph, 25, 173, 4.618880027);
  setPoint(graph, 26, 174, 4.706194306);
  setPoint(graph, 27, 175, 4.773128516);
  setPoint(graph, 28, 176, 4.818755111);
  setPoint(graph, 29, 177, 4.847154337);
  setPoint(graph, 30, 178, 4.862274614);
  setPoint(graph, 31, 179, 4.867519791);
  setPoint(graph, 32, 180, 4.866771732);
  setPoint(graph, 33, 181, 4.863256884);
  setPoint(graph, 34, 182, 4.854190542);
  setPoint(graph, 35, 183, 4.83529511);
  setPoint(graph, 36, 184, 4.802251796);
  setPoint(graph, 37, 185, 4.750514089);
  setPoint(graph, 38, 186, 4.67670372);
  setPoint(graph, 39, 187, 4.583353511);
  setPoint(graph, 40, 188, 4.474784844);
  setPoint(graph, 41, 189, 4.355577892);
  setPoint(graph, 42, 190, 4.23056043);
  setPoint(graph, 43, 191, 4.105428105);
  setPoint(graph, 44, 192, 3.993545847);
  setPoint(graph, 45, 193, 3.936896308);
  setPoint(graph, 46, 194, 3.897674292);
  setPoint(graph, 47, 195, 3.881962669);
  setPoint(graph, 48, 196, 3.893222024);
  setPoint(graph, 49, 197, 3.923529946);
  setPoint(graph, 50, 198, 3.961512409);
  setPoint(graph, 51, 199, 3.995201169);
  setPoint(graph, 52, 200, 4.021557454);
  setPoint(graph, 53, 201, 4.003214575);
  setPoint(graph, 54, 202, 3.967794673);
  setPoint(graph, 55, 203, 3.916759592);
  setPoint(graph, 56, 204, 3.785343428);
  setPoint(graph, 57, 205, 3.487650887);
  setPoint(graph, 58, 206, 3.043110801);
  setPoint(graph, 59, 207, 1.99413558);
  setPoint(graph, 60, 208, 1.979605892);
  setPoint(graph, 61, 209, 1.966303539);
  setPoint(graph, 62, 210, 1.954037491);
  setPoint(graph, 63, 211, 1.942650633);
  setPoint(graph, 64, 212, 1.932072235);
  setPoint(graph, 65, 213, 1.922250668);
  setPoint(graph, 66, 214, 1.913137494);
  setPoint(graph, 67, 215, 1.904674711);
  setPoint(graph, 68, 216, 1.896789201);
  setPoint(graph, 69, 217, 1.889476776);
  setPoint(graph, 70, 218, 1.882671778);
  setPoint(graph, 71, 219, 1.876275753);
  setPoint(graph, 72, 220, 1.8702202);
  setPoint(graph, 73, 221, 1.864427956);
  setPoint(graph, 74, 222, 1.8588192);
  setPoint(graph, 75, 223, 1.853307283);
  setPoint(graph, 76, 224, 1.84780791);
  setPoint(graph, 77, 225, 1.84222617);
  setPoint(graph, 78, 226, 1.836462041);
  setPoint(graph, 79, 227, 1.830417111);
  setPoint(graph, 80, 228, 1.823982202);
  setPoint(graph, 81, 229, 1.817045129);
  setPoint(graph, 82, 230, 1.809489321);
  setPoint(graph, 83, 231, 1.801216563);
  setPoint(graph, 84, 232, 1.792256189);
  setPoint(graph, 85, 233, 1.782608247);
  setPoint(graph, 86, 234, 1.753241664);
  setPoint(graph, 87, 235, 1.719779877);
  setPoint(graph, 88, 236, 1.69131776);
  setPoint(graph, 89, 237, 1.663813737);
  setPoint(graph, 90, 238, 1.636366844);
  setPoint(graph, 91, 239, 1.608529216);
  setPoint(graph, 92, 240, 1.580590716);
  setPoint(graph, 93, 241, 1.552802702);
  setPoint(graph, 94, 242, 1.524859327);
  setPoint(graph, 95, 243, 1.496880877);
  setPoint(graph, 96, 244, 1.469014001);
  setPoint(graph, 97, 245, 1.441436517);
  setPoint(graph, 98, 246, 1.414346114);
  setPoint(graph, 99, 247, 1.387964923);
  setPoint(graph,100, 248, 1.36253202);
  setPoint(graph,101, 249, 1.336206899);
  setPoint(graph,102, 250, 1.311568731);
  setPoint(graph,103, 251, 1.289126019);
  setPoint(graph,104, 252, 1.268776736);
  setPoint(graph,105, 253, 1.250307858);
  setPoint(graph,106, 254, 1.233672156);
  setPoint(graph,107, 255, 1.218814533);
  setPoint(graph,108, 256, 1.205682151);
  setPoint(graph,109, 257, 1.19421165);
  setPoint(graph,110, 258, 1.184323496);
  setPoint(graph,111, 259, 1.175926529);
  setPoint(graph,112, 260, 1.168922848);
  setPoint(graph,113, 261, 1.163216334);
  setPoint(graph,114, 262, 1.155014101);
  setPoint(graph,115, 263, 1.147216765);
  setPoint(graph,116, 264, 1.142373375);
  setPoint(graph,117, 265, 1.138794679);
  setPoint(graph,118, 266, 1.136061169);
  setPoint(graph,119, 267, 1.133872034);
  setPoint(graph,120, 268, 1.131957509);
  setPoint(graph,121, 269, 1.130070088);
  setPoint(graph,122, 270, 1.127965424);
  setPoint(graph,123, 271, 1.125398935);
  setPoint(graph,124, 272, 1.122116678);
  setPoint(graph,125, 273, 1.117860512);
  setPoint(graph,126, 274, 1.112358973);
  setPoint(graph,127, 275, 1.105324727);
  setPoint(graph,128, 276, 1.096513809);
  setPoint(graph,129, 277, 1.085882591);
  setPoint(graph,130, 278, 1.07357505);
  setPoint(graph,131, 279, 1.059549252);
  setPoint(graph,132, 280, 1.04385392);
  setPoint(graph,133, 281, 1.026537863);
  setPoint(graph,134, 282, 1.007663474);
  setPoint(graph,135, 282, 1.0);
  return graph;
}
