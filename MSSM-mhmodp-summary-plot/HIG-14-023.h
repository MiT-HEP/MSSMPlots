#include "TGraph.h"

TGraph* HIG_14_023_heavy_obs_upper(bool filled){
  TGraph* graph = new TGraph();
  graph->SetPoint(0,600,69);
  graph->SetPoint(1,489.8424918,65.46534653);
  graph->SetPoint(2,388.208877,56.63521497);
  graph->SetPoint(3,283.7167876,56.38307692);
  graph->SetPoint(4,230.3513868,55.02785493);
  graph->SetPoint(5,199.6108165,44.40884324);
  graph->SetPoint(6,179.419115,34.69247938);
  if(filled){
    graph->SetPoint(7,179.5624121,34);
    graph->SetPoint(8,179.3554787,35);
    graph->SetPoint(9,179.1442044,36);
    graph->SetPoint(10,178.9286504,37);
    graph->SetPoint(11,178.7088817,38);
    graph->SetPoint(12,178.4849478,39);
    graph->SetPoint(13,178.2568867,40);
    graph->SetPoint(14,178.0247051,41);
    graph->SetPoint(15,177.7883195,42);
    graph->SetPoint(16,177.5472386,43);
    graph->SetPoint(17,177.274229,44);
    graph->SetPoint(18,177.0639782,45);
    graph->SetPoint(19,176.8139141,46);
    graph->SetPoint(20,176.5601045,47);
    graph->SetPoint(21,176.3026762,48);
    graph->SetPoint(22,176.0417094,49);
    graph->SetPoint(23,175.777274,50);
    graph->SetPoint(24,175.5094339,51);
    graph->SetPoint(25,175.2382496,52);
    graph->SetPoint(26,174.9637788,53);
    graph->SetPoint(27,174.6860778,54);
    graph->SetPoint(28,174.4052012,55);
    graph->SetPoint(29,174.1212027,56);
    graph->SetPoint(30,173.8341348,57);
    graph->SetPoint(31,173.5440488,58);
    graph->SetPoint(32,173.2509955,59);
    graph->SetPoint(33,172.9550246,60);
    graph->SetPoint(34,172.6561852,61);
    graph->SetPoint(35,172.3545256,62);
    graph->SetPoint(36,172.050095,63);
    graph->SetPoint(37,171.7429375,64);
    graph->SetPoint(38,171.4331008,65);
    graph->SetPoint(39,171.1206304,66);
    graph->SetPoint(40,170.8055715,67);
    graph->SetPoint(41,170.4879686,68);
    graph->SetPoint(42,170.1678656,69);
    graph->SetPoint(43,600,69);
  }
  return graph;
}

TGraph* HIG_14_023_heavy_exp_upper(){
  TGraph* graph = new TGraph();
  graph->SetPoint(0,600,69);
  graph->SetPoint(1,489.4253539,69);
  graph->SetPoint(2,387.7060638,60.72392099);
  graph->SetPoint(3,284.9167609,48.63796688);
  graph->SetPoint(4,232.6697082,42.77931385);
  graph->SetPoint(5,201.1400304,36.81378531);
  graph->SetPoint(6,179.8917824,32.35952234);
  return graph;
}

TGraph* HIG_14_023_heavy_obs_lower(bool filled){
  TGraph* graph = new TGraph();
  graph->SetPoint(0,600,0.999);
  graph->SetPoint(1,492.3427836,0.999);
  graph->SetPoint(2,390.3551192,0.999);
  graph->SetPoint(3,291.1864816,0.999);
  graph->SetPoint(4,239.9488849,0.999);
  graph->SetPoint(5,207.6279023,1.138970119);
  graph->SetPoint(6,186.7941497,0.999);
  graph->SetPoint(7,186.7941497,0.999);
  if(filled){
    graph->SetPoint(8,-1,0.999);
    graph->SetPoint(9,600,0.999);
  }
  return graph;
}

TGraph* HIG_14_023_heavy_exp_lower(){
  TGraph* graph = new TGraph();
  graph->SetPoint(0,600,0.999);
  graph->SetPoint(1,492.3427836,0.999);
  graph->SetPoint(2,390.3551192,0.999);
  graph->SetPoint(3,291.1864816,0.999);
  graph->SetPoint(4,239.9488849,0.999);
  graph->SetPoint(5,207.6279023,1.138970119);
  graph->SetPoint(6,186.7941497,0.999);
  return graph;
}

TGraph* HIG_14_023_obs(){
  TGraph* graph = new TGraph();
  graph->SetPoint( 0, 80.0000000,69);
  graph->SetPoint( 1,120.2866178,69);
  graph->SetPoint( 2,120.7413258,68);
  graph->SetPoint( 3,121.1921528,67);
  graph->SetPoint( 4,121.6390484,66);
  graph->SetPoint( 5,122.0819613,65);
  graph->SetPoint( 6,122.5208393,64);
  graph->SetPoint( 7,122.9556264,63);
  graph->SetPoint( 8,123.386275,62);
  graph->SetPoint( 9,123.8127267,61);
  graph->SetPoint(10,124.2349253,60);
  graph->SetPoint(11,124.6528141,59);
  graph->SetPoint(12,125.0663349,58);
  graph->SetPoint(13,125.4754287,57);
  graph->SetPoint(14,125.8800356,56);
  graph->SetPoint(15,126.2800943,55);
  graph->SetPoint(16,126.660325,54);
  graph->SetPoint(17,127.0663171,53);
  graph->SetPoint(18,127.4523531,52);
  graph->SetPoint(19,127.8335849,51);
  graph->SetPoint(20,128.2099455,50);
  graph->SetPoint(21,128.5813667,49);
  graph->SetPoint(22,128.9477789,48);
  graph->SetPoint(23,129.3091114,47);
  graph->SetPoint(24,129.6652919,46);
  graph->SetPoint(25,130.0162504,45);
  graph->SetPoint(26,130.3619043,44);
  graph->SetPoint(27,130.7021816,43);
  graph->SetPoint(28,131.0370042,42);
  graph->SetPoint(29,131.3662927,41);
  graph->SetPoint(30,131.6899663,40);
  graph->SetPoint(31,132.0079423,39);
  graph->SetPoint(32,132.3201367,38);
  graph->SetPoint(33,132.6264636,37);
  graph->SetPoint(34,132.9268392,36);
  graph->SetPoint(35,133.2211664,35);
  graph->SetPoint(36,133.5093586,34);
  graph->SetPoint(37,133.7913227,33);
  graph->SetPoint(38,134.0669644,32);
  graph->SetPoint(39,134.3361871,31);
  graph->SetPoint(40,134.5988927,30);
  graph->SetPoint(41,134.854981,29);
  graph->SetPoint(42,135.1043503,28);
  graph->SetPoint(43,135.3468962,27);
  graph->SetPoint(44,135.5825145,26);
  graph->SetPoint(45,135.8110975,25);
  graph->SetPoint(46,136.0325367,24);
  graph->SetPoint(47,136.2467224,23);
  graph->SetPoint(48,136.4535438,22);
  graph->SetPoint(49,136.6528896,21);
  graph->SetPoint(50,136.8446485,20);
  graph->SetPoint(51,137.0286744,19);
  graph->SetPoint(52,137.2049418,18);
  graph->SetPoint(53,137.3732976,17);
  graph->SetPoint(54,137.533645,16);
  graph->SetPoint(55,137.6858985,15);
  graph->SetPoint(56,137.6630605,15.15); // observed upper point
  graph->SetPoint(57,132.7345523,8);    
  graph->SetPoint(58,138.867912,4.37);   // observed lower point
  graph->SetPoint(59,138.8760814,4.3);
  graph->SetPoint(60,138.8881527,4.2);
  graph->SetPoint(61,138.9006739,4.1);
  graph->SetPoint(62,138.9137004,4);
  graph->SetPoint(63,138.9272946,3.9);
  graph->SetPoint(64,138.9415276,3.8);
  graph->SetPoint(65,138.9564798,3.7);
  graph->SetPoint(66,138.9722434,3.6);
  graph->SetPoint(67,138.9889238,3.5);
  graph->SetPoint(68,139.0066423,3.4);
  graph->SetPoint(69,139.025539,3.3);
  graph->SetPoint(70,139.0457765,3.2);
  graph->SetPoint(71,139.0675445,3.1);
  graph->SetPoint(72,139.0910652,3);
  graph->SetPoint(73,139.1166005,2.9);
  graph->SetPoint(74,139.1444608,2.8);
  graph->SetPoint(75,139.1750163,2.7);
  graph->SetPoint(76,139.2087115,2.6);
  graph->SetPoint(77,139.2460834,2.5);
  graph->SetPoint(78,139.2877864,2.4);
  graph->SetPoint(79,139.3346235,2.3);
  graph->SetPoint(80,139.3875889,2.2);
  graph->SetPoint(81,139.4479247,2.1);
  graph->SetPoint(82,139.5171929,2);
  graph->SetPoint(83,139.5973395,1.9);
  graph->SetPoint(84,139.6910944,1.8);
  graph->SetPoint(85,139.8018333,1.7);
  graph->SetPoint(86,139.9340231,1.6);
  graph->SetPoint(87,140.0936703,1.5);
  graph->SetPoint(88,140.2890002,1.4);
  graph->SetPoint(89,140.5315132,1.3);
  graph->SetPoint(90,140.8376727,1.2);
  graph->SetPoint(91,141.2316906,1.1);
  graph->SetPoint(92,141.7502061,1);
  graph->SetPoint(93,142.0819612,0.95);
  graph->SetPoint(94, 80.0000000,0.95);
  graph->SetPoint(95, 80.0000000,69);
  return graph;
}

TGraph* HIG_14_023_exp(){
  TGraph* graph = new TGraph();
  graph->SetPoint( 0, 80.0000000,69);
  graph->SetPoint( 1,120.2866178,69);
  graph->SetPoint( 2,120.7413258,68);
  graph->SetPoint( 3,121.1921528,67);
  graph->SetPoint( 4,121.6390484,66);
  graph->SetPoint( 5,122.0819613,65);
  graph->SetPoint( 6,122.5208393,64);
  graph->SetPoint( 7,122.9556264,63);
  graph->SetPoint( 8,123.386275,62);
  graph->SetPoint( 9,123.8127267,61);
  graph->SetPoint(10,124.2349253,60);
  graph->SetPoint(11,124.6528141,59);
  graph->SetPoint(12,125.0663349,58);
  graph->SetPoint(13,125.4754287,57);
  graph->SetPoint(14,125.8800356,56);
  graph->SetPoint(15,126.2800943,55);
  graph->SetPoint(16,126.660325,54);
  graph->SetPoint(17,127.0663171,53);
  graph->SetPoint(18,127.4523531,52);
  graph->SetPoint(19,127.8335849,51);
  graph->SetPoint(20,128.2099455,50);
  graph->SetPoint(21,128.5813667,49);
  graph->SetPoint(22,128.9477789,48);
  graph->SetPoint(23,129.3091114,47);
  graph->SetPoint(24,129.6652919,46);
  graph->SetPoint(25,130.0162504,45);
  graph->SetPoint(26,130.3619043,44);
  graph->SetPoint(27,130.7021816,43);
  graph->SetPoint(28,131.0370042,42);
  graph->SetPoint(29,131.3662927,41);
  graph->SetPoint(30,131.6899663,40);
  graph->SetPoint(31,132.0079423,39);
  graph->SetPoint(32,132.3201367,38);
  graph->SetPoint(33,132.6264636,37);
  graph->SetPoint(34,132.9268392,36);
  graph->SetPoint(35,133.2211664,35);
  graph->SetPoint(36,133.5093586,34);
  graph->SetPoint(37,133.7913227,33);
  graph->SetPoint(38,134.0669644,32);
  graph->SetPoint(39,134.3361871,31);
  graph->SetPoint(40,134.5988927,30);
  graph->SetPoint(41,134.854981,29);
  graph->SetPoint(42,135.1043503,28);
  graph->SetPoint(43,135.3468962,27);
  graph->SetPoint(44,135.5825145,26);
  graph->SetPoint(45,135.8110975,25);
  graph->SetPoint(46,136.0325367,24);
  graph->SetPoint(47,136.2467224,23);
  graph->SetPoint(48,136.4535438,22);
  graph->SetPoint(49,136.6528896,21);
  graph->SetPoint(50,136.8446485,20);
  graph->SetPoint(51,136.9402597 , 19.480446930); // expected upper point
  graph->SetPoint(52,132.1646315 , 12.893939390);
  graph->SetPoint(53,126.8759825 ,  8.000000000);
  graph->SetPoint(54,133.0084375 ,  5.101923077);
  graph->SetPoint(55,138.9999561 ,  3.437735849); //expected upper point
  graph->SetPoint(56,139.025539,3.3);
  graph->SetPoint(57,139.0457765,3.2);
  graph->SetPoint(58,139.0675445,3.1);
  graph->SetPoint(59,139.0910652,3);
  graph->SetPoint(60,139.1166005,2.9);
  graph->SetPoint(61,139.1444608,2.8);
  graph->SetPoint(62,139.1750163,2.7);
  graph->SetPoint(63,139.2087115,2.6);
  graph->SetPoint(64,139.2460834,2.5);
  graph->SetPoint(65,139.2877864,2.4);
  graph->SetPoint(66,139.3346235,2.3);
  graph->SetPoint(67,139.3875889,2.2);
  graph->SetPoint(68,139.4479247,2.1);
  graph->SetPoint(69,139.5171929,2);
  graph->SetPoint(70,139.5973395,1.9);
  graph->SetPoint(71,139.6910944,1.8);
  graph->SetPoint(72,139.8018333,1.7);
  graph->SetPoint(73,139.9340231,1.6);
  graph->SetPoint(74,140.0936703,1.5);
  graph->SetPoint(75,140.2890002,1.4);
  graph->SetPoint(76,140.5315132,1.3);
  graph->SetPoint(77,140.8376727,1.2);
  graph->SetPoint(78,141.2316906,1.1);
  graph->SetPoint(79,141.7502061,1);
  graph->SetPoint(80,142.0819612,0.95);
  graph->SetPoint(81, 80.0000000,0.95);
  graph->SetPoint(82, 80.0000000,69);
  return graph;
}

