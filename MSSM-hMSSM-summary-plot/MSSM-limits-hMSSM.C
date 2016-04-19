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

#include "HIG-12-032.h"
#include "HIG-13-024.h"
#include "HIG-13-031.h"
#include "HIG-14-017.h"
#include "HIG-14-023.h"
#include "HIG-14-029.h"
#include "HIG-14-034.h"
#include "Eligibility.h"
#include "Couplings-Constraint.h"

void MSSM_limits_hMSSM(){
  gStyle->SetOptStat(0);
  TColor* tRed     = new TColor(3001, 1., 0., 0., "tRed"     , 0.15);
  TColor* tGreen   = new TColor(3002, 0., 1., 0., "tGreen"   , 0.15);
  TColor* tBlue    = new TColor(3003, 0., 0., 1., "tBlue"    , 0.15);
  TColor* tMagenta = new TColor(3004, 1., 0., 1., "tMagenta" , 0.15);
  TColor* tCyan    = new TColor(3005, 0., 1., 1., "tCyan"    , 0.50);
  TColor* tYellow  = new TColor(3006, 1., 1., 0., "tYellow"  , 0.15);
  TColor* tOrange  = new TColor(3007, 1., .5, 0., "tOrange"  , 0.15);
  TColor* tBlack   = new TColor(3008, 0., 0., 0., "tBlack"   , 0.15);
  
  TCanvas* canv = new TCanvas("MSSM", "MSSM Limits (hMSSM)", 600, 640);
  canv->SetGridx(0); canv->SetLogx(1);
  canv->SetGridy(0); canv->SetLogy(1);
  canv->SetLeftMargin(0.12);
  canv->SetRightMargin(0.05);
  canv->SetTopMargin(0.06);
  canv->SetBottomMargin(0.10);  
  TH1F* hr=canv->DrawFrame(130., 1., 1100., 60.);
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

  TGraph* e1 = Eligibility();
  TGraph* e2 = Eligibility();
  e1->SetLineColor(kBlack);
  e1->SetLineWidth(1);
  e1->SetLineStyle(7);
  e2->SetLineWidth(1);
  e2->SetLineStyle(7);
  e2->SetLineColor(kBlack);
  e2->SetFillColor(tBlack->GetNumber());  
  e2->SetFillStyle(1001); //3005
  e2->Draw("Fsame");
  e1->Draw("Lsame");
  
  TGraph* e3 = Eligibility_lower();
  TGraph* e4 = Eligibility_lower();
  e3->SetLineColor(kBlack);
  e3->SetLineWidth(1);
  e3->SetLineStyle(7);
  e4->SetLineColor(kBlack);
  e4->SetFillColor(tBlack->GetNumber());  
  e4->Draw("Fsame");
  e3->Draw("Lsame");

  TGraph* g5a = Couplings_95_exp();
  g5a->SetLineColor(kMagenta+2);
  g5a->SetLineWidth(-303);
  g5a->SetFillStyle(3004);
  g5a->SetFillColor(kMagenta+2);
  g5a->SetLineStyle(1);
  g5a->Draw("Csame");

  TGraph* g4 = Couplings_95_obs(true );
  TGraph* g5 = Couplings_95_obs(false);
  g5->SetLineColor(kMagenta);
  g5->SetLineStyle(1);
  g5->SetLineWidth(1);
  g5->SetMarkerStyle(20);
  g5->SetMarkerSize(0.7);
  g5->SetMarkerColor(kMagenta);
  g4->SetLineColor(kMagenta);
  g4->SetFillColor(tMagenta->GetNumber());
  g4->SetFillStyle(1001); //3005
  g4->Draw("Fsame");
  g5->Draw("Lsame");

  TGraph* g19 = HIG_14_029_exp();
  g19->SetLineColor(kBlue+2);
  g19->SetLineWidth(303);
  g19->SetFillStyle(3004);
  g19->SetFillColor(kBlue+2);
  g19->SetLineStyle(1);
  g19->Draw("Csame");

  TGraph* g20 = HIG_14_029_obs(true );
  TGraph* g21 = HIG_14_029_obs(false);
  g21->SetLineColor(kBlue);
  g21->SetLineStyle(1);
  g21->SetLineWidth(1);
  g21->SetMarkerStyle(20);
  g21->SetMarkerSize(0.7);
  g21->SetMarkerColor(kBlue);
  g20->SetLineColor(kBlue);
  g20->SetFillColor(tBlue->GetNumber());
  g20->SetFillStyle(1001); //3005
  g20->Draw("Fsame");
  g21->Draw("Lsame");

  TGraph* g22 = HIG_14_017_exp();
  g22->SetLineColor(kCyan+2);
  g22->SetLineWidth(303);
  g22->SetFillStyle(3004);
  g22->SetFillColor(kCyan+2);    
  g22->SetLineStyle(1);
  g22->Draw("Csame");

  TGraph* g23 = HIG_14_017_obs(true );
  TGraph* g24 = HIG_14_017_obs(false);
  g24->SetLineColor(kCyan);
  g24->SetLineStyle(1);
  g24->SetLineWidth(1);
  g24->SetMarkerStyle(20);
  g24->SetMarkerSize(0.7);
  g24->SetMarkerColor(kCyan);
  g23->SetLineColor(kCyan);
  g23->SetFillColor(tCyan->GetNumber());
  g23->SetFillStyle(1001); //3005
  g23->Draw("Fsame");
  g24->Draw("Lsame");

  TGraph* g16 = HIG_13_024_exp();
  g16->SetLineColor(kYellow+2);
  g16->SetLineWidth(303);
  g16->SetFillStyle(3004);
  g16->SetFillColor(kYellow+2);    
  g16->SetLineStyle(1);
  g16->Draw("Csame");
 
  TGraph* g17 = HIG_13_024_obs(true );
  TGraph* g18 = HIG_13_024_obs(false);
  g18->SetLineColor(kYellow);
  g18->SetLineStyle(1);
  g18->SetLineWidth(1);
  g18->SetMarkerStyle(20);
  g18->SetMarkerSize(0.7);
  g18->SetMarkerColor(kYellow);
  g17->SetLineColor(kYellow);
  g17->SetFillColor(tYellow->GetNumber());
  g17->SetFillStyle(1001); //3005
  g17->Draw("Fsame");
  g18->Draw("Lsame");

  TGraph* g6 = HIG_13_031_exp();
  g6->SetLineColor(kOrange-3);
  g6->SetLineWidth(-303);
  g6->SetFillStyle(3004);
  g6->SetFillColor(kOrange-3);
  g6->SetLineStyle(1);
  g6->Draw("Csame");

  TGraph* g7 = HIG_13_031_obs(true );
  TGraph* g8 = HIG_13_031_obs(false);
  g8->SetLineColor(kOrange-3);
  g8->SetLineStyle(1);
  g8->SetLineWidth(1);
  g8->SetMarkerStyle(20);
  g8->SetMarkerSize(0.7);
  g8->SetMarkerColor(kOrange-3);
  g7->SetLineColor(kOrange-3);
  g7->SetFillColor(tOrange->GetNumber());
  g7->SetFillStyle(1001); //3005
  g7->Draw("Fsame");
  g8->Draw("Lsame");

  TGraph* g1 = HIG_14_034_exp();
  g1->SetLineColor(kRed+2);
  g1->SetLineWidth(303);
  g1->SetFillStyle(3004);
  g1->SetFillColor(kRed+2);
  g1->SetLineStyle(1);
  g1->Draw("Csame");

  TGraph* g2 = HIG_14_034_obs(true );
  TGraph* g3 = HIG_14_034_obs(false);
  g3->SetLineColor(kRed);
  g3->SetLineStyle(1);
  g3->SetLineWidth(1);
  g3->SetMarkerStyle(20);
  g3->SetMarkerSize(0.7);
  g3->SetMarkerColor(kRed);
  g2->SetLineColor(kRed);
  g2->SetFillColor(tRed->GetNumber());
  g2->SetFillStyle(1001); //3005
  g2->Draw("Fsame");
  g3->Draw("Lsame");

  TGraph* g25 = HIG_12_032_exp();
  g25->SetLineColor(kGreen+2);
  g25->SetLineWidth(303);
  g25->SetFillStyle(3004);
  g25->SetFillColor(kGreen+2);
  g25->SetLineStyle(1);
  g25->Draw("Csame");

  TGraph* g26 = HIG_12_032_obs_right(true );
  TGraph* g27 = HIG_12_032_obs_right(false);
  g27->SetLineColor(kGreen);
  g27->SetLineStyle(1);
  g27->SetLineWidth(1);
  g27->SetMarkerStyle(20);
  g27->SetMarkerSize(0.7);
  g27->SetMarkerColor(kGreen);
  g26->SetLineColor(kGreen);
  g26->SetFillColor(tGreen->GetNumber());
  g26->SetFillStyle(1001); //3005
  g26->Draw("Fsame");
  g27->Draw("Lsame");

  TGraph* g28 = HIG_12_032_obs_left(true );
  TGraph* g29 = HIG_12_032_obs_left(false);
  g29->SetLineColor(kGreen);
  g29->SetLineStyle(1);
  g29->SetLineWidth(1);
  g29->SetMarkerStyle(20);
  g29->SetMarkerSize(0.7);
  g29->SetMarkerColor(kGreen);
  g28->SetLineColor(kGreen);
  g28->SetFillColor(tGreen->GetNumber());
  g28->SetFillStyle(1001); //3005
  g28->Draw("Fsame");
  g29->Draw("Lsame");


  /*
  TGraph* g9 = HIG_14_023_exp_lower();
  g9->SetLineColor(kMagenta);
  g9->SetLineWidth(103);
  g9->SetFillStyle(3004);
  g9->SetFillColor(kMagenta);
  g9->SetLineStyle(1);
  g9->Draw("Csame");

  TGraph* g10 = HIG_14_023_exp_middle();
  g10->SetLineColor(kMagenta);
  g10->SetLineWidth(103);
  g10->SetFillStyle(3004);
  g10->SetFillColor(kMagenta);
  g10->SetLineStyle(1);
  g10->Draw("Csame");
  
  TGraph* g11 = HIG_14_023_exp_upper();
  g11->SetLineColor(kMagenta);
  g11->SetLineWidth(303);
  g11->SetFillStyle(3004);
  g11->SetFillColor(kMagenta);
  g11->SetLineStyle(1);
  g11->Draw("Lsame");

  TGraph* g12 = HIG_14_023_obs_lower();
  TGraph* g13 = HIG_14_023_obs_lower();
  g12->SetLineColor(kMagenta);
  g12->SetLineStyle(1);
  g12->SetLineWidth(1);
  g12->SetMarkerStyle(20);
  g12->SetMarkerSize(0.7);
  g12->SetMarkerColor(kMagenta);
  g13->SetLineColor(kMagenta);
  g13->SetFillColor(tMagenta->GetNumber());
  g13->SetFillStyle(1001); //3005
  g13->Draw("Fsame");
  g12->Draw("Csame");

  TGraph* g14 = HIG_14_023_obs_upper(false);
  TGraph* g15 = HIG_14_023_obs_upper(true);
  g14->SetLineColor(kMagenta);
  g14->SetLineStyle(1);
  g14->SetLineWidth(1);
  g14->SetMarkerStyle(20);
  g14->SetMarkerSize(0.7);
  g14->SetMarkerColor(kMagenta);
  g15->SetLineColor(kMagenta);
  g15->SetFillColor(tMagenta->GetNumber());
  g15->SetFillStyle(1001); //3005
  g15->Draw("Fsame");
  g14->Draw("Csame");
  */
    
  TLatex* tex;
  tex = new TLatex();
  tex->SetNDC();
  tex->SetTextAlign(11);
  tex->SetTextFont(43);
  tex->SetLineWidth(2);

  //tex->SetTextSize(18);
  //tex->SetTextAngle(45);
  //tex->SetTextColor(kBlue+2);
  //tex->DrawLatex(0.77,0.77,"A/H/h #rightarrow #tau#tau");

  //tex->SetTextSize(15);
  //tex->SetTextAngle(40);
  //tex->SetTextColor(kCyan+2);
  //tex->DrawLatex(0.60,0.87,"H/A #rightarrow bb");

  //tex->SetTextSize(18);
  //tex->SetTextAngle(31);
  //tex->SetTextColor(kYellow+2);
  //tex->DrawLatex(0.35,0.77,"A/H/h #rightarrow #mu#mu");

  //tex->SetTextSize(15);
  //tex->SetTextAngle(90);
  //tex->SetTextColor(kMagenta+2);
  //tex->DrawLatex(0.425,0.68,"Couplings to h(125)");

  //tex->SetTextSize(15);
  //tex->SetTextAngle(0);
  //tex->SetTextColor(kOrange+7);
  //tex->DrawLatex(0.30,0.325,"H #rightarrow WW/ZZ");

  //tex->SetTextSize(15);
  //tex->SetTextAngle(0);
  //tex->SetTextColor(kGreen+2);
  //tex->DrawLatex(0.135,0.1475,"H #rightarrow hh (bb#gamma#gamma)");

  //tex->SetTextSize(15);
  //tex->SetTextAngle(0);
  //tex->SetTextColor(kRed+2);
  //tex->DrawLatex(0.135,0.21,"#splitline{H #rightarrow hh (bb#tau#tau) /}{A #rightarrow Zh (ll#tau#tau)}");

  tex->SetTextAlign(31);
  tex->SetTextSize(15);
  tex->SetTextAngle(0);
  tex->SetTextColor(kBlack);
  tex->DrawLatex(0.92,0.58,"Model not strictly applicable");

  //tex->SetTextFont(43);
  //tex->SetTextSize(20);
  tex->SetTextFont(42);
  tex->SetLineWidth(2);
  tex->SetTextSize(0.035);
  tex->DrawLatex(0.948,0.95,"#leq 5.1 fb^{-1} (7 TeV) + #leq 19.7 fb^{-1} (8 TeV)");
  tex->SetTextSize(0.034);
  tex->DrawLatex(0.15,0.059, "130");

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

  //tex->SetTextFont(42);
  
  //tex->SetTextFont(43);
  //tex->SetTextSize(14);
  //tex->SetTextAngle(270);
  //tex->DrawLatex(0.93, 0.74, "January 2016");

  TGraph* obs = new TGraph(); obs->SetFillColor(kGray);
  TGraph* exp = new TGraph(); exp->SetLineWidth(303); exp->SetFillStyle(3004);     

  TLegend* leg0_ = new TLegend(0.53, 0.105, 0.945, 0.52);
  leg0_->SetBorderSize(1);
  leg0_->SetFillStyle (1001);
  leg0_->SetTextSize(0.022464);
  leg0_->SetFillColor (kWhite);
  leg0_->AddEntry(obs, "Observed exclusion 95% CL"                   , "F");  
  leg0_->AddEntry(exp, "Expected exclusion 95% CL"                   , "LF");
  leg0_->AddEntry(e2 , "Model not strictly applicable"               , "F");  // eligibility
  leg0_->AddEntry(g4 , "h(125) (HIG-15-002)"                         , "F");  // couplings superseding EPJC 75 (2015) 212
  leg0_->AddEntry(g23, "A/H #rightarrow bb (arXiv:1506.08329)"       , "F");  // Hbb
  leg0_->AddEntry(g17, "A/H/h #rightarrow #mu#mu (arXiv:1508.01437)" , "F");  // Hmm
  leg0_->AddEntry(g20, "A/H/h #rightarrow #tau#tau  (HIG-14-029)"    , "F");  // Htt
  leg0_->AddEntry(g2 , "#splitline{H #rightarrow hh (bb#tau#tau) / A #rightarrow Zh (ll#tau#tau)}{(arXiv:1510.01181)}", "F");  // H->hh/A->Zh (ttbb)
  leg0_->AddEntry(g28, "H #rightarrow hh (bb#gamma#gamma) (HIG-13-032)"                    , "F");  // H->hh(bbgamgam) 
  leg0_->AddEntry(g7 , "H#rightarrow WW/ZZ (arXiv:1504.00936)"      , "F");  // H->WW/ZZ 
  //leg0_->AddEntry(e2 , "Model not strictly applicable" , "F");  // eligibility
  //leg0_->AddEntry(g4 , "HIG-15-002"                    , "F");  // couplings superseding EPJC 75 (2015) 212
  //leg0_->AddEntry(g23, "JHEP 11 (2015) 071"            , "F");  // Hbb
  //leg0_->AddEntry(g17, "PLB 752 (2016) 221"            , "F");  // Hmm
  //leg0_->AddEntry(g20, "HIG-14-029"                    , "F");  // Htt
  //leg0_->AddEntry(g2 , "arXiv:1510.01181"              , "F");  // H->hh/A->Zh (ttbb)
  //leg0_->AddEntry(g28, "HIG-13-032"                    , "F");  // H->hh(bbgamgam) 
  //leg0_->AddEntry(g7 , "JHEP 10 (2015) 144"            , "F");  // H->WW/ZZ 
  leg0_->Draw("same");

  //tex->SetTextFont(43);
  //tex->SetTextSize(14);
  //tex->SetTextAngle(0);
  //tex->SetTextColor(kBlack);
  //tex->DrawLatex(0.79, 0.185, "95% CL exclusion contours");

  //TLegend* leg1_ = new TLegend(0.52, 0.11, 0.85, 0.16);
  //leg1_->SetBorderSize(0);
  //leg1_->SetFillStyle (0);
  //leg1_->SetTextSize(0.025);
  //leg1_->SetFillColor (kWhite);
  //leg1_->AddEntry(exp, "expected" , "LF");
  //leg1_->Draw("same");

  //TLegend* leg2_ = new TLegend(0.70, 0.11, 1.07, 0.16);
  //leg2_->SetBorderSize(0);
  //leg2_->SetFillStyle (0);
  //leg2_->SetTextSize(0.025);
  //leg2_->SetFillColor (kWhite);
  //leg2_->AddEntry(obs, "observed" , "F");
  //leg2_->Draw("same");

  TPaveText* extra = new TPaveText(0.70, 0.85, 0.8, 0.95, "NDC");
  extra->SetBorderSize(   0 );
  extra->SetFillStyle (   0 );
  extra->SetTextAlign (  12 );
  extra->SetTextSize  (0.03 );
  extra->SetTextColor (   1 );
  extra->SetTextFont  (  62 ); /// 62
  extra->AddText("hMSSM");
  extra->Draw("same");  

  canv->Update();
  canv->Print("MSSM-hMSSM-summary-plot-2016.pdf");
  canv->Print("MSSM-hMSSM-summary-plot-2016.png");
  return;
}

