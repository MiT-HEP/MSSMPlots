#include <iostream>

#include "TROOT.h"

#include "TColor.h"
#include "TCanvas.h"
#include "TPaveText.h"
#include "TLatex.h"
#include "TLegend.h"
#include "TStyle.h"
#include "TGraph.h"
#include "TH2F.h"

#include "HIG-14-029.h"
#include "HIG-14-023.h"
#include "HIG-14-017.h"
#include "HIG-13-024.h"
#include "HIG-13-031.h"
#include "Mass-Constraint.h"

void MSSM_limits_mhmodp(){
  gStyle->SetOptStat(0);
  //TColor* tRed     = new TColor(3001, 1., 0., 0., "tRed"     , 0.15);
  //TColor* tGreen   = new TColor(3002, 0., 1., 0., "tGreen"   , 0.15);
  TColor* tBlue    = new TColor(3003, 0., 0., 1., "tBlue"    , 0.15);
  TColor* tMagenta = new TColor(3004, 1., 0., 1., "tMagenta" , 0.15);
  TColor* tCyan    = new TColor(3005, 0., 1., 1., "tCyan"    , 0.50);
  TColor* tYellow  = new TColor(3006, 1., 1., 0., "tYellow"  , 0.15);
  TColor* tOrange  = new TColor(3007, 1., .5, 0., "tOrange"  , 0.15);

  TCanvas* canv = new TCanvas("MSSM", "MSSM Limits (mhmod+)", 600, 640);
  canv->SetGridx(0); canv->SetLogx(1);
  canv->SetGridy(0); canv->SetLogy(1);
  canv->SetLeftMargin(0.12);
  canv->SetRightMargin(0.05);
  canv->SetTopMargin(0.06);
  canv->SetBottomMargin(0.10);
  TH1F* hr=canv->DrawFrame(90., 1., 1100., 60.);
  // format x axis
  hr->SetXTitle("m_{A} [GeV]");
  hr->GetXaxis()->SetLabelFont(42);
  hr->GetXaxis()->SetLabelSize(0.034);
  hr->GetXaxis()->SetLabelOffset(0.015); /// 0.015
  hr->GetXaxis()->SetTitleSize(0.04);
  hr->GetXaxis()->SetTitleFont(42);
  hr->GetXaxis()->SetTitleColor(1);
  hr->GetXaxis()->SetTitleOffset(1.20);
  hr->GetXaxis()->SetNdivisions(50005);
  hr->GetXaxis()->SetMoreLogLabels();
  hr->GetXaxis()->SetNoExponent();
  // format y axis
  hr->SetYTitle("tan#beta");
  hr->GetYaxis()->SetLabelFont(42);
  hr->GetYaxis()->SetTitleSize(0.04);
  hr->GetYaxis()->SetTitleOffset(1.30);
  hr->GetYaxis()->SetLabelSize(0.034);    
  hr->GetYaxis()->SetNdivisions(50005);
  hr->GetYaxis()->SetMoreLogLabels();

  TGraph* g5 = HIG_14_029_exp_upper();
  g5->SetLineColor(kBlue+2);
  g5->SetLineWidth(303);
  g5->SetFillStyle(3004);
  g5->SetFillColor(kBlue+2);
  g5->SetLineStyle(1);
  g5->Draw("Csame");

  TGraph* g6 = HIG_14_029_exp_lower();
  g6->SetLineColor(kBlue+2);
  g6->SetLineWidth(-303);
  g6->SetFillStyle(3004);
  g6->SetFillColor(kBlue+2);  
  g6->SetLineStyle(1);
  g6->Draw("Csame");

  TGraph* g1 = HIG_14_029_obs_upper(true );
  TGraph* g2 = HIG_14_029_obs_upper(false);
  g2->SetLineColor(kBlue);
  g2->SetLineStyle(1);
  g2->SetLineWidth(1);
  g2->SetMarkerStyle(20);
  g2->SetMarkerSize(0.7);
  g2->SetMarkerColor(kBlue);
  g1->SetLineColor(kBlue);
  g1->SetFillColor(tBlue->GetNumber());
  g1->SetFillStyle(1001); //3005
  g1->Draw("Fsame");
  g2->Draw("Lsame");
  
  TGraph* g3 = HIG_14_029_obs_lower();
  TGraph* g4 = HIG_14_029_obs_lower();
  g4->SetLineColor(kBlue);
  g4->SetLineStyle(1);
  g4->SetLineWidth(1);
  g4->SetMarkerStyle(20);
  g4->SetMarkerSize(0.7);
  g4->SetMarkerColor(kBlue);
  g3->SetFillColor(tBlue->GetNumber());
  g3->SetFillStyle(1001); // 3005
  g3->Draw("Fsame");
  g4->Draw("Lsame");

  TGraph* g10 = HIG_14_017_exp();
  g10->SetLineColor(kCyan+2);
  g10->SetLineWidth(303);
  g10->SetFillStyle(3004);
  g10->SetFillColor(kCyan+2);    
  g10->SetLineStyle(1);
  g10->Draw("Csame");

  TGraph* g11 = HIG_14_017_obs(true );
  TGraph* g12 = HIG_14_017_obs(false);
  g12->SetLineColor(kCyan);
  g12->SetLineStyle(1);
  g12->SetLineWidth(1);
  g12->SetMarkerStyle(20);
  g12->SetMarkerSize(0.7);
  g12->SetMarkerColor(kCyan);
  g11->SetLineColor(kCyan);
  g11->SetFillColor(tCyan->GetNumber());
  g11->SetFillStyle(1001); //3005
  g11->Draw("Fsame");
  g12->Draw("Lsame");

  TGraph* g9 = HIG_13_024_exp();
  g9->SetLineColor(kYellow+2);
  g9->SetLineWidth(303);
  g9->SetFillStyle(3004);
  g9->SetFillColor(kYellow+2);    
  g9->SetLineStyle(1);
  g9->Draw("Csame");
 
  TGraph* g7 = HIG_13_024_obs(true );
  TGraph* g8 = HIG_13_024_obs(false);
  g8->SetLineColor(kYellow);
  g8->SetLineStyle(1);
  g8->SetLineWidth(1);
  g8->SetMarkerStyle(20);
  g8->SetMarkerSize(0.7);
  g8->SetMarkerColor(kYellow);
  g7->SetLineColor(kYellow);
  g7->SetFillColor(tYellow->GetNumber());
  g7->SetFillStyle(1001); //3005
  g7->Draw("Fsame");
  g8->Draw("Lsame");

  TGraph* g15 = HIG_14_023_exp();
  g15->SetLineColor(kMagenta+2);  
  g15->SetLineWidth(-303);
  g15->SetFillStyle(3004);
  g15->SetFillColor(kMagenta+2);      
  g15->SetLineStyle(1);
  g15->Draw("Csame");

  TGraph* g13 = HIG_14_023_obs();  
  TGraph* g14 = HIG_14_023_obs();  
  g13->SetLineColor(kMagenta);
  g13->SetLineStyle(1);
  g13->SetLineWidth(1);
  g13->SetMarkerStyle(20);
  g13->SetMarkerSize(0.7);
  g13->SetMarkerColor(kMagenta);
  g14->SetLineColor(kMagenta);
  g14->SetFillColor(tMagenta->GetNumber());
  g14->SetFillStyle(1001); //3005
  g14->Draw("Fsame");
  g13->Draw("Lsame");

  TGraph* g16 = HIG_14_023_heavy_exp_upper();
  g16->SetLineColor(kMagenta+2);
  g16->SetLineWidth(-303);
  g16->SetFillStyle(3004);
  g16->SetFillColor(kMagenta+2);   
  g16->SetLineStyle(1);
  g16->Draw("Csame");

  TGraph* g18 = HIG_14_023_heavy_obs_upper(false);  
  TGraph* g19 = HIG_14_023_heavy_obs_upper(true );  
  g18->SetLineColor(kMagenta);
  g18->SetLineStyle(1);
  g18->SetLineWidth(1);
  g18->SetMarkerStyle(20);
  g18->SetMarkerSize(0.7);
  g18->SetMarkerColor(kMagenta);
  g19->SetFillColor(tMagenta->GetNumber());
  g19->SetFillStyle(1001); //3005
  g19->Draw("Fsame");
  g18->Draw("Lsame");

  TGraph* g17 = HIG_14_023_heavy_exp_lower();
  g17->SetLineColor(kMagenta+2);
  g17->SetLineWidth(303);
  g17->SetFillStyle(3004);
  g17->SetFillColor(kMagenta+2);     
  g17->SetLineStyle(1);
  g17->Draw("Csame");

  TGraph* g20 = HIG_14_023_heavy_obs_lower(false);  
  TGraph* g21 = HIG_14_023_heavy_obs_lower(true );  
  g20->SetLineColor(kMagenta);
  g20->SetLineStyle(1);
  g20->SetLineWidth(1);
  g20->SetMarkerStyle(20);
  g20->SetMarkerSize(0.7);
  g20->SetMarkerColor(kMagenta);
  g21->SetFillColor(tMagenta->GetNumber());
  g21->SetFillStyle(1001); //3005
  g21->Draw("Fsame");
  g20->Draw("Lsame");

  TGraph* g22 = HIG_13_031_exp();
  g22->SetLineColor(kOrange-3);  
  g22->SetLineWidth(-303);
  g22->SetFillStyle(3004);
  g22->SetFillColor(kOrange-3);      
  g22->SetLineStyle(1);
  g22->Draw("Csame");

  TGraph* g23 = HIG_13_031_obs(false);  
  TGraph* g24 = HIG_13_031_obs(true);  
  g23->SetLineColor(kOrange);
  g23->SetLineStyle(1);
  g23->SetLineWidth(1);
  g23->SetMarkerStyle(20);
  g23->SetMarkerSize(0.7);
  g23->SetMarkerColor(kOrange);
  g24->SetLineColor(kOrange);
  g24->SetFillColor(tOrange->GetNumber());
  g24->SetFillStyle(1001); //3005
  g24->Draw("Fsame");
  g23->Draw("Lsame");

  TGraph* l122 = HIG_122();
  l122->SetLineColor(kRed);
  l122->SetLineWidth(1);
  l122->SetLineStyle(7);
  l122->Draw("Csame");

  TGraph* l123 = HIG_123();
  l123->SetLineColor(kRed);
  l123->SetLineWidth(1);
  l123->SetLineStyle(7);
  l123->Draw("Csame");

  TGraph* l124 = HIG_124();
  l124->SetLineColor(kRed);
  l124->SetLineWidth(1);
  l124->SetLineStyle(7);
  l124->Draw("Csame");

  TGraph* l125 = HIG_125();
  l125->SetLineColor(kRed);
  l125->SetLineWidth(1);
  l125->SetLineStyle(7);
  l125->Draw("Csame");

  TGraph* l126 = HIG_126();
  l126->SetLineColor(kRed);
  l126->SetLineWidth(1);
  l126->SetLineStyle(7);
  l126->Draw("Csame");

  TLatex* tex;
  tex = new TLatex();
  tex->SetNDC();
  tex->SetTextAlign(31);
  tex->SetTextFont(43);
  tex->SetLineWidth(2);

  //tex->SetTextSize(18);
  //tex->SetTextAngle(38);
  //tex->SetTextColor(kBlue+2);
  //tex->DrawLatex(0.74,0.79,"A/H/h #rightarrow #tau#tau");

  //tex->SetTextSize(15);
  //tex->SetTextAngle(45);
  //tex->SetTextColor(kCyan+2);
  //tex->DrawLatex(0.65,0.87,"H/A #rightarrow bb");

  //tex->SetTextSize(18);
  //tex->SetTextAngle(35);
  //tex->SetTextColor(kYellow+2);
  //tex->DrawLatex(0.43,0.75,"A/H/h #rightarrow #mu#mu");

  //tex->SetTextSize(15);
  //tex->SetTextAngle(23);
  //tex->SetTextColor(kMagenta+2);
  //tex->DrawLatex(0.47,0.87,"H^{#pm} #rightarrow #tau#nu");

  //tex->SetTextSize(18);
  //tex->SetTextAngle(90);
  //tex->SetTextColor(kMagenta+2);
  //tex->DrawLatex(0.23,0.57,"H^{#pm} #rightarrow #tau#nu");

  //tex->SetTextSize(16);
  //tex->SetTextAngle(0);
  //tex->SetTextColor(kOrange-3);
  //tex->DrawLatex(0.33,0.20,"H #rightarrow WW/ZZ");

  //tex->SetTextFont(43);
  //tex->SetTextSize(20);
  tex->SetTextFont(42);
  tex->SetLineWidth(2);
  tex->SetTextSize(0.035);
  tex->DrawLatex(0.948,0.95,"#leq 5.1 fb^{-1} (7 TeV) + #leq 19.7 fb^{-1} (8 TeV)");
  //tex->DrawLatex(0.36,0.95,"#bf{CMS} #it{Preliminary}");
  //tex->DrawLatex(0.90, 0.95, "LHC run-1 2011-2012 ( 19.8 - 24.6 fb^{ -1} )");

  //tex->SetTextAlign(33);
  tex->SetTextFont(63);
  tex->SetTextSize(25);
  tex->SetTextAngle( 0);
  tex->SetTextColor(kBlack);
  tex->DrawLatex(0.21, 0.95, "CMS");

  tex->SetTextFont(53);
  tex->SetTextSize(25);
  tex->DrawLatex(0.41, 0.95, "Preliminary");


  //tex->SetTextFont(43);
  //tex->SetTextSize(14);
  //tex->SetTextAngle(270);
  //tex->DrawLatex(0.93, 0.74, "January 2016");

  tex->SetTextFont(43);
  tex->SetTextSize(14);
  tex->SetTextAngle(0);
  tex->SetTextColor(kRed);
  tex->DrawLatex(0.93, 0.780, "m_{h}=126 GeV");  
  tex->DrawLatex(0.93, 0.590, "m_{h}=125 GeV");
  tex->DrawLatex(0.93, 0.510, "m_{h}=124 GeV");
  tex->DrawLatex(0.93, 0.470, "m_{h}=123 GeV");
  tex->DrawLatex(0.93, 0.445, "m_{h}=122 GeV");


  TGraph* obs = new TGraph(); obs->SetFillColor(kGray);
  TGraph* exp = new TGraph(); exp->SetLineWidth(303); exp->SetFillStyle(3004);     

  TLegend* leg0_ = new TLegend(0.505, 0.105, 0.945, 0.42);
  leg0_->SetBorderSize(1);
  leg0_->SetFillStyle (1001);
  leg0_->SetTextSize(0.022464);
  leg0_->SetFillColor (kWhite);
  //leg0_->AddEntry(g14, "JHEP 11 (2015) 018" , "F");  // H+  
  //leg0_->AddEntry(g11, "JHEP 11 (2015) 071" , "F");  // Hbb 
  //leg0_->AddEntry(g7 , "PLB 752 (2016) 221" , "F");  // Hmm 
  //leg0_->AddEntry(g1 , "HIG-14-029"         , "F");  // Htt
  //leg0_->AddEntry(g24, "JHEP 10 (2015) 144" , "F");  // H->WW/ZZ
  leg0_->AddEntry(obs, "Observed exclusion 95% CL"                      , "F");  
  leg0_->AddEntry(exp, "Expected exclusion 95% CL"                      , "LF");
  leg0_->AddEntry(g14, "H^{#pm} #rightarrow #tau#nu (arXiv:1508.07774)" , "F");  // H+  
  leg0_->AddEntry(g11, "A/H #rightarrow bb (arXiv:1506.08329)"          , "F");  // Hbb 
  leg0_->AddEntry(g7 , "A/H/h #rightarrow #mu#mu (arXiv:1508.01437)"    , "F");  // Hmm 
  leg0_->AddEntry(g1 , "A/H/h #rightarrow #tau#tau (HIG-14-029)"        , "F");  // Htt
  leg0_->AddEntry(g24, "H #rightarrow WW/ZZ (arXiv:1504.00936)"         , "F");  // H->WW/ZZ
  leg0_->Draw("same");

/*
  tex->SetTextFont(43);
  tex->SetTextSize(14);
  tex->SetTextAngle(0);
  tex->SetTextColor(kBlack);
  tex->DrawLatex(0.74, 0.185, "95% CL exclusion contours");


  TLegend* leg1_ = new TLegend(0.47, 0.11, 0.87, 0.16);
  leg1_->SetBorderSize(0);
  leg1_->SetFillStyle (0);
  leg1_->SetTextSize(0.025);
  leg1_->SetFillColor (kWhite);
  leg1_->AddEntry(exp, "Exp 95% CL limit" , "LF");
  leg1_->Draw("same");

  TLegend* leg2_ = new TLegend(0.69, 0.11, 1.09, 0.16);
  leg2_->SetBorderSize(0);
  leg2_->SetFillStyle (0);
  leg2_->SetTextSize(0.025);
  leg2_->SetFillColor (kWhite);
  leg2_->AddEntry(obs, "Obs 95% CL limit" , "F");
  leg2_->Draw("same");
*/
  TPaveText* extra = new TPaveText(0.69, 0.85, 0.79, 0.95, "NDC");
  extra->SetBorderSize(   0 );
  extra->SetFillStyle (   0 );
  extra->SetTextAlign (  12 );
  extra->SetTextSize  (0.03 );
  extra->SetTextColor (   1 );
  extra->SetTextFont  (  62 ); /// 62
  extra->AddText("MSSM m_{h}^{mod+}");
  extra->Draw("same");  

  canv->Update();
  canv->Print("MSSM-mhmodp-summary-plot-2016.pdf");
  canv->Print("MSSM-mhmodp-summary-plot-2016.png");
  return;
}

