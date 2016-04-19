#include "TGraph.h"

TGraph* HIG_13_024_obs(bool filled){
  TGraph* graph = new TGraph();
  graph->SetPoint( 0, 130, 18.2443);
  graph->SetPoint( 1, 131, 17.6572);
  graph->SetPoint( 2, 132, 17.439 );
  graph->SetPoint( 3, 133, 17.6536);
  graph->SetPoint( 4, 134, 17.9829);
  graph->SetPoint( 5, 135, 18.3042);
  graph->SetPoint( 6, 136, 18.4567);
  graph->SetPoint( 7, 137, 18.5159);
  graph->SetPoint( 8, 138, 18.562 );
  graph->SetPoint( 9, 139, 18.448 );
  graph->SetPoint(10, 140, 18.0635);
  graph->SetPoint(11, 141, 17.9926);
  graph->SetPoint(12, 142, 18.0497);
  graph->SetPoint(13, 143, 18.276 );
  graph->SetPoint(14, 144, 18.6179);
  graph->SetPoint(15, 145, 19.0296);
  graph->SetPoint(16, 146, 19.2287);
  graph->SetPoint(17, 147, 19.4361);
  graph->SetPoint(18, 148, 19.7796);
  graph->SetPoint(19, 149, 20.7651);
  graph->SetPoint(20, 150, 21.7538);
  graph->SetPoint(21, 151, 21.9797);
  graph->SetPoint(22, 152, 21.9346);
  graph->SetPoint(23, 153, 21.6486);
  graph->SetPoint(24, 154, 21.0769);
  graph->SetPoint(25, 155, 20.6068);
  graph->SetPoint(26, 156, 19.7904);
  graph->SetPoint(27, 157, 18.7447);
  graph->SetPoint(28, 158, 17.7106);
  graph->SetPoint(29, 159, 16.7148);
  graph->SetPoint(30, 160, 16.5735);
  graph->SetPoint(31, 161, 16.3065);
  graph->SetPoint(32, 162, 16.4862);
  graph->SetPoint(33, 163, 17.0464);
  graph->SetPoint(34, 164, 18.3158);
  graph->SetPoint(35, 165, 19.7944);
  graph->SetPoint(36, 166, 20.8312);
  graph->SetPoint(37, 167, 21.816 );
  graph->SetPoint(38, 168, 22.4936);
  graph->SetPoint(39, 169, 22.5924);
  graph->SetPoint(40, 170, 22.1526);
  graph->SetPoint(41, 171, 21.2941);
  graph->SetPoint(42, 172, 20.5   );
  graph->SetPoint(43, 173, 20.2549);
  graph->SetPoint(44, 174, 20.5354);
  graph->SetPoint(45, 175, 20.8896);
  graph->SetPoint(46, 176, 21.2367);
  graph->SetPoint(47, 177, 21.3333);
  graph->SetPoint(48, 178, 21.5025);
  graph->SetPoint(49, 179, 21.5473);
  graph->SetPoint(50, 180, 21.475 );
  graph->SetPoint(51, 181, 21.1222);
  graph->SetPoint(52, 182, 21.02  );
  graph->SetPoint(53, 183, 21.0749);
  graph->SetPoint(54, 184, 21.2004);
  graph->SetPoint(55, 185, 21.45  );
  graph->SetPoint(56, 186, 21.5652);
  graph->SetPoint(57, 187, 21.5265);
  graph->SetPoint(58, 188, 21.2906);
  graph->SetPoint(59, 189, 20.8866);
  graph->SetPoint(60, 190, 20.4239);
  graph->SetPoint(61, 191, 20.0259);
  graph->SetPoint(62, 192, 19.8558);
  graph->SetPoint(63, 193, 19.7804);
  graph->SetPoint(64, 194, 19.7639);
  graph->SetPoint(65, 195, 19.8   );
  graph->SetPoint(66, 196, 19.9298);
  graph->SetPoint(67, 197, 20.3186);
  graph->SetPoint(68, 198, 20.8779);
  graph->SetPoint(69, 199, 21.1765);
  graph->SetPoint(70, 200, 21.377 );
  graph->SetPoint(71, 205, 21.9681);
  graph->SetPoint(72, 210, 21.872 );
  graph->SetPoint(73, 215, 18.7196);
  graph->SetPoint(74, 220, 17.7414);
  graph->SetPoint(75, 225, 22.1846);
  graph->SetPoint(76, 230, 30.5437);
  graph->SetPoint(77, 235, 35.2459);
  graph->SetPoint(78, 240, 34.5677);
  graph->SetPoint(79, 245, 32.7959);
  graph->SetPoint(80, 250, 30.1097);
  graph->SetPoint(81, 255, 26.04  );
  graph->SetPoint(82, 260, 26.5   );
  graph->SetPoint(83, 265, 30.4176);
  graph->SetPoint(84, 270, 29.8689);
  graph->SetPoint(85, 275, 27.7133);
  graph->SetPoint(86, 280, 31.2459);
  graph->SetPoint(87, 285, 35.8833);
  graph->SetPoint(88, 290, 37.7623);
  graph->SetPoint(89, 295, 42.4457);
  graph->SetPoint(90, 300, 42.9995);
  if(filled){
    graph->SetPoint(91, 300, 65.0000);
    graph->SetPoint(92, 130, 65.0000);
    graph->SetPoint(93, 130, 18.2443);
  }
  return graph;
}

TGraph* HIG_13_024_exp(){
  TGraph* graph = new TGraph();
  graph->SetPoint( 0, 130, 18.3321);
  graph->SetPoint( 1, 131, 18.3081);
  graph->SetPoint( 2, 132, 18.2705);
  graph->SetPoint( 3, 133, 18.2278);
  graph->SetPoint( 4, 134, 18.1817);
  graph->SetPoint( 5, 135, 18.1281);
  graph->SetPoint( 6, 136, 18.2059);
  graph->SetPoint( 7, 137, 18.2608);
  graph->SetPoint( 8, 138, 18.2872);
  graph->SetPoint( 9, 139, 18.2777);
  graph->SetPoint(10, 140, 18.2312);
  graph->SetPoint(11, 141, 18.2841);
  graph->SetPoint(12, 142, 18.3568);
  graph->SetPoint(13, 143, 18.4494);
  graph->SetPoint(14, 144, 18.5596);
  graph->SetPoint(15, 145, 18.4845);
  graph->SetPoint(16, 146, 18.4379);
  graph->SetPoint(17, 147, 18.2052);
  graph->SetPoint(18, 148, 17.9974);
  graph->SetPoint(19, 149, 17.8825);
  graph->SetPoint(20, 150, 17.7779);
  graph->SetPoint(21, 151, 17.7933);
  graph->SetPoint(22, 152, 17.8077);
  graph->SetPoint(23, 153, 17.8201);
  graph->SetPoint(24, 154, 17.8304);
  graph->SetPoint(25, 155, 17.8392);
  graph->SetPoint(26, 156, 17.7527);
  graph->SetPoint(27, 157, 17.6496);
  graph->SetPoint(28, 158, 17.5268);
  graph->SetPoint(29, 159, 17.384 );
  graph->SetPoint(30, 160, 17.4231);
  graph->SetPoint(31, 161, 17.5162);
  graph->SetPoint(32, 162, 17.7652);
  graph->SetPoint(33, 163, 17.9843);
  graph->SetPoint(34, 164, 18.2769);
  graph->SetPoint(35, 165, 18.5443);
  graph->SetPoint(36, 166, 18.6233);
  graph->SetPoint(37, 167, 18.7084);
  graph->SetPoint(38, 168, 18.7975);
  graph->SetPoint(39, 169, 18.8863);
  graph->SetPoint(40, 170, 18.9733);
  graph->SetPoint(41, 171, 18.8709);
  graph->SetPoint(42, 172, 18.7813);
  graph->SetPoint(43, 173, 18.7134);
  graph->SetPoint(44, 174, 18.6762);
  graph->SetPoint(45, 175, 18.6267);
  graph->SetPoint(46, 176, 18.7617);
  graph->SetPoint(47, 177, 18.8851);
  graph->SetPoint(48, 178, 19.0523);
  graph->SetPoint(49, 179, 19.2944);
  graph->SetPoint(50, 180, 19.537 );
  graph->SetPoint(51, 181, 19.6614);
  graph->SetPoint(52, 182, 19.7777);
  graph->SetPoint(53, 183, 19.8357);
  graph->SetPoint(54, 184, 19.823 );
  graph->SetPoint(55, 185, 19.8669);
  graph->SetPoint(56, 186, 20.1158);
  graph->SetPoint(57, 187, 20.3752);
  graph->SetPoint(58, 188, 20.3698);
  graph->SetPoint(59, 189, 20.4031);
  graph->SetPoint(60, 190, 20.438 );
  graph->SetPoint(61, 191, 20.6324);
  graph->SetPoint(62, 192, 20.7037);
  graph->SetPoint(63, 193, 20.8211);
  graph->SetPoint(64, 194, 20.9282);
  graph->SetPoint(65, 195, 21.0389);
  graph->SetPoint(66, 196, 20.9801);
  graph->SetPoint(67, 197, 20.9337);
  graph->SetPoint(68, 198, 20.8856);
  graph->SetPoint(69, 199, 20.8369);
  graph->SetPoint(70, 200, 20.7895);
  graph->SetPoint(71, 205, 21.5416);
  graph->SetPoint(72, 210, 22.356 );
  graph->SetPoint(73, 215, 23.154 );
  graph->SetPoint(74, 220, 24.0721);
  graph->SetPoint(75, 225, 25.3455);
  graph->SetPoint(76, 230, 26.1889);
  graph->SetPoint(77, 235, 27.165);
  graph->SetPoint(78, 240, 28.293 );
  graph->SetPoint(79, 245, 29.4382);
  graph->SetPoint(80, 250, 30.6197);
  graph->SetPoint(81, 255, 30.8292);
  graph->SetPoint(82, 260, 31.1395);
  graph->SetPoint(83, 265, 31.6315);
  graph->SetPoint(84, 270, 32.16  );
  graph->SetPoint(85, 275, 33.9657);
  graph->SetPoint(86, 280, 34.9735);
  graph->SetPoint(87, 285, 36.0713);
  graph->SetPoint(88, 290, 37.3672);
  graph->SetPoint(89, 295, 38.846 );
  graph->SetPoint(90, 300, 38.9995);
  return graph;
}