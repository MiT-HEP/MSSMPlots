#include "mssm_xs_tools.h"
#include "mssm_xs_tools.C"

#include <iostream>
#include <stdio.h>

#include "TCanvas.h" 

void mhmod_mass_constraints(int plot){
  mssm_xs_tools mssm("mhmodp_mu200_13TeV.root",true,0);

  TCanvas* canv = new TCanvas("MSSM", "MSSM Limits (mhmod+)", 600, 600);
  canv->SetGridx(0); canv->SetLogx(1);
  canv->SetGridy(0); canv->SetLogy(1);
  canv->SetLeftMargin(0.15);
  TH1F* hr=canv->DrawFrame(90., 1., 1100., 60.);
  // format x axis
  hr->SetXTitle("m_{A} [GeV]");
  hr->GetXaxis()->SetLabelFont(62);
  hr->GetXaxis()->SetLabelSize(0.03);
  hr->GetXaxis()->SetLabelOffset(0.015); /// 0.015
  hr->GetXaxis()->SetTitleSize(0.04);
  hr->GetXaxis()->SetTitleFont(62);
  hr->GetXaxis()->SetTitleColor(1);
  hr->GetXaxis()->SetTitleOffset(1.20);
  hr->SetNdivisions(50005, "X");
  hr->GetXaxis()->SetMoreLogLabels();
  hr->GetXaxis()->SetNoExponent();
  hr->GetXaxis()->SetLabelSize(0.040);
  // format y axis
  hr->SetYTitle("tan#beta");
  hr->GetYaxis()->SetLabelFont(62);
  hr->GetYaxis()->SetTitleSize(0.04);
  hr->GetYaxis()->SetTitleOffset(1.60);
  hr->GetYaxis()->SetLabelSize(0.04);    
  hr->SetNdivisions(50005, "Y");
  hr->GetYaxis()->SetMoreLogLabels();
    
  TGraph* m122=new TGraph(); int i122=0;
  TGraph* m123=new TGraph(); int i123=0;
  TGraph* m124=new TGraph(); int i124=0;
  TGraph* m125=new TGraph(); int i125=0;
  TGraph* m126=new TGraph(); int i126=0;
  double mA = 100., tanb=1.;
  for(int i=0;i<59;++i){
    tanb+=1.; mA=100.;
    for(int j=0;j<500;++j){
      mA+=2.;
      //std::cout << "mA=" << mA << " tanb=" << tanb << " mh=" << mssm.mh(mA, tanb) << std::endl;
      if(121.9<mssm.mh(mA, tanb) && mssm.mh(mA, tanb)<=122.1){        
        m122->SetPoint(i122++,mA, tanb);
      }
      if(122.9<mssm.mh(mA, tanb) && mssm.mh(mA, tanb)<=123.1){
        m123->SetPoint(i123++,mA, tanb);
      }
      if(123.95<mssm.mh(mA, tanb) && mssm.mh(mA, tanb)<=124.05){
        m124->SetPoint(i124++,mA, tanb);
      }
      if(124.99<mssm.mh(mA, tanb) && mssm.mh(mA, tanb)<=125.01){
        m125->SetPoint(i125++,mA, tanb);
      }
      if(125.999<mssm.mh(mA, tanb) && mssm.mh(mA, tanb)<=126.001){
        m126->SetPoint(i126++,mA, tanb);
      }
    }
  } 
  if(plot == 122){
    m122->Sort();
    m122->SetLineWidth(3);
    m122->SetLineColor(kRed);
    m122->SetMarkerSize(0.5);
    m122->SetMarkerStyle(20);
    m122->SetMarkerColor(kRed);
    m122->Draw("P");
  }
  if(plot == 123){  
    m123->Sort();
    m123->SetLineWidth(3);
    m123->SetLineColor(kMagenta+2);
    m123->SetMarkerSize(0.5);
    m123->SetMarkerStyle(20);
    m123->SetMarkerColor(kMagenta+2);
    m123->Draw("LP");
  }
  if(plot == 124){ 
    m124->Sort();
    m124->SetLineWidth(3);
    m124->SetLineColor(kCyan+2);
    m124->SetMarkerSize(0.5);
    m124->SetMarkerStyle(20);
    m124->SetMarkerColor(kCyan+2);
    m124->Draw("LP");
  }
  if(plot == 125){
    m125->Sort();
    m125->SetLineWidth(3);
    m125->SetLineColor(kGreen+2);
    m125->SetMarkerSize(0.5);
    m125->SetMarkerStyle(20);
    m125->SetMarkerColor(kGreen);
    m125->Draw("LP");
  }
  if(plot == 126){
    m126->Sort();  
    m126->SetLineWidth(3);
    m126->SetLineColor(kBlue+4);
    m126->SetMarkerSize(0.5);
    m126->SetMarkerStyle(20);
    m126->SetMarkerColor(kBlue);
    m126->Draw("LP");
  }
  return;
}
