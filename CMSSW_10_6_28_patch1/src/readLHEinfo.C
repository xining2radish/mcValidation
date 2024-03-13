void readLHEinfo()
{
    float LHE_lp_Pt = -999, LHE_lp_Eta = -999, LHE_lp_Phi = -999, LHE_lp_Mass = -999;
    float LHE_lm_Pt = -999, LHE_lm_Eta = -999, LHE_lm_Phi = -999, LHE_lm_Mass = -999;
    float LHE_Z_Pt = -999, LHE_Z_Eta = -999, LHE_Z_Phi = -999, LHE_Z_Mass = -999;

    float LHE_ep_Pt = -999, LHE_ep_Eta = -999, LHE_ep_Phi = -999, LHE_ep_Mass = -999;
    float LHE_em_Pt = -999, LHE_em_Eta = -999, LHE_em_Phi = -999, LHE_em_Mass = -999;
    float LHE_Ze_Pt = -999, LHE_Ze_Eta = -999, LHE_Ze_Phi = -999, LHE_Ze_Mass = -999;

    float LHE_mup_Pt = -999, LHE_mup_Eta = -999, LHE_mup_Phi = -999, LHE_mup_Mass = -999;
    float LHE_mum_Pt = -999, LHE_mum_Eta = -999, LHE_mum_Phi = -999, LHE_mum_Mass = -999;
    float LHE_Zmu_Pt = -999, LHE_Zmu_Eta = -999, LHE_Zmu_Phi = -999, LHE_Zmu_Mass = -999;

    float LHE_taup_Pt = -999, LHE_taup_Eta = -999, LHE_taup_Phi = -999, LHE_taup_Mass = -999;
    float LHE_taum_Pt = -999, LHE_taum_Eta = -999, LHE_taum_Phi = -999, LHE_taum_Mass = -999;
    float LHE_Ztau_Pt = -999, LHE_Ztau_Eta = -999, LHE_Ztau_Phi = -999, LHE_Ztau_Mass = -999;

    TFile *outputfile = new TFile("outputHist_LHE.root", "RECREATE");
    TTree *outputtree = new TTree("tree", "tree");

    outputtree->Branch("LHE_lp_Pt", &LHE_lp_Pt, "LHE_lp_Pt/F");
    outputtree->Branch("LHE_lp_Eta", &LHE_lp_Eta, "LHE_lp_Eta/F");
    outputtree->Branch("LHE_lp_Phi", &LHE_lp_Phi, "LHE_lp_Phi/F");
    outputtree->Branch("LHE_lp_Mass", &LHE_lp_Mass, "LHE_lp_Mass/F");
    outputtree->Branch("LHE_lm_Pt", &LHE_lm_Pt, "LHE_lm_Pt/F");
    outputtree->Branch("LHE_lm_Eta", &LHE_lm_Eta, "LHE_lm_Eta/F");
    outputtree->Branch("LHE_lm_Phi", &LHE_lm_Phi, "LHE_lm_Phi/F");
    outputtree->Branch("LHE_lm_Mass", &LHE_lm_Mass, "LHE_lm_Mass/F");
    outputtree->Branch("LHE_Z_Pt", &LHE_Z_Pt, "LHE_Z_Pt/F");
    outputtree->Branch("LHE_Z_Eta", &LHE_Z_Eta, "LHE_Z_Eta/F");
    outputtree->Branch("LHE_Z_Phi", &LHE_Z_Phi, "LHE_Z_Phi/F");
    outputtree->Branch("LHE_Z_Mass", &LHE_Z_Mass, "LHE_Z_Mass/F");

    outputtree->Branch("LHE_ep_Pt", &LHE_ep_Pt, "LHE_ep_Pt/F");
    outputtree->Branch("LHE_ep_Eta", &LHE_ep_Eta, "LHE_ep_Eta/F");
    outputtree->Branch("LHE_ep_Phi", &LHE_ep_Phi, "LHE_ep_Phi/F");
    outputtree->Branch("LHE_ep_Mass", &LHE_ep_Mass, "LHE_ep_Mass/F");
    outputtree->Branch("LHE_em_Pt", &LHE_em_Pt, "LHE_em_Pt/F");
    outputtree->Branch("LHE_em_Eta", &LHE_em_Eta, "LHE_em_Eta/F");
    outputtree->Branch("LHE_em_Phi", &LHE_em_Phi, "LHE_em_Phi/F");
    outputtree->Branch("LHE_em_Mass", &LHE_em_Mass, "LHE_em_Mass/F");
    outputtree->Branch("LHE_Ze_Pt", &LHE_Ze_Pt, "LHE_Ze_Pt/F");
    outputtree->Branch("LHE_Ze_Eta", &LHE_Ze_Eta, "LHE_Ze_Eta/F");
    outputtree->Branch("LHE_Ze_Phi", &LHE_Ze_Phi, "LHE_Ze_Phi/F");
    outputtree->Branch("LHE_Ze_Mass", &LHE_Ze_Mass, "LHE_Ze_Mass/F");

    outputtree->Branch("LHE_mup_Pt", &LHE_mup_Pt, "LHE_mup_Pt/F");
    outputtree->Branch("LHE_mup_Eta", &LHE_mup_Eta, "LHE_mup_Eta/F");
    outputtree->Branch("LHE_mup_Phi", &LHE_mup_Phi, "LHE_mup_Phi/F");
    outputtree->Branch("LHE_mup_Mass", &LHE_mup_Mass, "LHE_mup_Mass/F");
    outputtree->Branch("LHE_mum_Pt", &LHE_mum_Pt, "LHE_mum_Pt/F");
    outputtree->Branch("LHE_mum_Eta", &LHE_mum_Eta, "LHE_mum_Eta/F");
    outputtree->Branch("LHE_mum_Phi", &LHE_mum_Phi, "LHE_mum_Phi/F");
    outputtree->Branch("LHE_mum_Mass", &LHE_mum_Mass, "LHE_mum_Mass/F");
    outputtree->Branch("LHE_Zmu_Pt", &LHE_Zmu_Pt, "LHE_Zmu_Pt/F");
    outputtree->Branch("LHE_Zmu_Eta", &LHE_Zmu_Eta, "LHE_Zmu_Eta/F");
    outputtree->Branch("LHE_Zmu_Phi", &LHE_Zmu_Phi, "LHE_Zmu_Phi/F");
    outputtree->Branch("LHE_Zmu_Mass", &LHE_Zmu_Mass, "LHE_Zmu_Mass/F");

    outputtree->Branch("LHE_taup_Pt", &LHE_taup_Pt, "LHE_taup_Pt/F");
    outputtree->Branch("LHE_taup_Eta", &LHE_taup_Eta, "LHE_taup_Eta/F");
    outputtree->Branch("LHE_taup_Phi", &LHE_taup_Phi, "LHE_taup_Phi/F");
    outputtree->Branch("LHE_taup_Mass", &LHE_taup_Mass, "LHE_taup_Mass/F");
    outputtree->Branch("LHE_taum_Pt", &LHE_taum_Pt, "LHE_taum_Pt/F");
    outputtree->Branch("LHE_taum_Eta", &LHE_taum_Eta, "LHE_taum_Eta/F");
    outputtree->Branch("LHE_taum_Phi", &LHE_taum_Phi, "LHE_taum_Phi/F");
    outputtree->Branch("LHE_taum_Mass", &LHE_taum_Mass, "LHE_taum_Mass/F");
    outputtree->Branch("LHE_Ztau_Pt", &LHE_Ztau_Pt, "LHE_Ztau_Pt/F");
    outputtree->Branch("LHE_Ztau_Eta", &LHE_Ztau_Eta, "LHE_Ztau_Eta/F");
    outputtree->Branch("LHE_Ztau_Phi", &LHE_Ztau_Phi, "LHE_Ztau_Phi/F");
    outputtree->Branch("LHE_Ztau_Mass", &LHE_Ztau_Mass, "LHE_Ztau_Mass/F");

    TChain chain("Events");
    TString fpath = "hw7_100.root";
    chain.Add(fpath.Data());

    const int MAX_LEN = 5000;
    UInt_t nLHEPart;
    Float_t LHEPart_pt[MAX_LEN];
    Float_t LHEPart_eta[MAX_LEN];
    Float_t LHEPart_phi[MAX_LEN];
    Float_t LHEPart_mass[MAX_LEN];
    Int_t LHEPart_pdgId[MAX_LEN];
    Int_t LHEPart_spin[MAX_LEN];
    Int_t LHEPart_status[MAX_LEN];

    chain.SetBranchAddress("nLHEPart", &nLHEPart);
    chain.SetBranchAddress("LHEPart_pt", LHEPart_pt);
    chain.SetBranchAddress("LHEPart_eta", LHEPart_eta);
    chain.SetBranchAddress("LHEPart_phi", LHEPart_phi);
    chain.SetBranchAddress("LHEPart_mass", LHEPart_mass);
    chain.SetBranchAddress("LHEPart_pdgId", LHEPart_pdgId);
    chain.SetBranchAddress("LHEPart_spin", LHEPart_spin);
    chain.SetBranchAddress("LHEPart_status", LHEPart_status);

    Long64_t NEVT = chain.GetEntries();
    std::cout << "process " << fpath << std::endl;
    for (Long64_t ievt = 0; ievt < NEVT; ++ievt)
    {
        chain.GetEntry(ievt);
        if (ievt % 10000 == 0)
            std::cout << "processing " << ievt << "/" << NEVT << " = " << ievt * 100. / NEVT << "%" << std::endl;

        TLorentzVector LHE_lp, LHE_lm, LHE_Z;
        TLorentzVector LHE_ep, LHE_em, LHE_Ze;
        TLorentzVector LHE_mup, LHE_mum, LHE_Zmu;
        TLorentzVector LHE_taup, LHE_taum, LHE_Ztau;
        int flag = 0, flag_e = 0, flag_mu = 0, flag_tau = 0;
        int charge = 0;
        for (int ipart = 0; ipart < nLHEPart; ++ipart)
        {
            if (LHEPart_pdgId[ipart] == -11 && LHEPart_status[ipart] == 1)
            {
                flag_e += 1;
                LHE_ep_Pt = LHEPart_pt[ipart];
                LHE_ep_Eta = LHEPart_eta[ipart];
                LHE_ep_Phi = LHEPart_phi[ipart];
                LHE_ep_Mass = LHEPart_mass[ipart];
            }
            if (LHEPart_pdgId[ipart] == 11 && LHEPart_status[ipart] == 1)
            {
                flag_e += 1;
                LHE_em_Pt = LHEPart_pt[ipart];
                LHE_em_Eta = LHEPart_eta[ipart];
                LHE_em_Phi = LHEPart_phi[ipart];
                LHE_em_Mass = LHEPart_mass[ipart];
            }
            if (LHEPart_pdgId[ipart] == -13 && LHEPart_status[ipart] == 1)
            {
                flag_mu += 1;
                LHE_mup_Pt = LHEPart_pt[ipart];
                LHE_mup_Eta = LHEPart_eta[ipart];
                LHE_mup_Phi = LHEPart_phi[ipart];
                LHE_mup_Mass = LHEPart_mass[ipart];
            }
            if (LHEPart_pdgId[ipart] == 13 && LHEPart_status[ipart] == 1)
            {
                flag_mu += 1;
                LHE_mum_Pt = LHEPart_pt[ipart];
                LHE_mum_Eta = LHEPart_eta[ipart];
                LHE_mum_Phi = LHEPart_phi[ipart];
                LHE_mum_Mass = LHEPart_mass[ipart];
            }
            if (LHEPart_pdgId[ipart] == -15 && LHEPart_status[ipart] == 1)
            {
                flag_tau += 1;
                LHE_taup_Pt = LHEPart_pt[ipart];
                LHE_taup_Eta = LHEPart_eta[ipart];
                LHE_taup_Phi = LHEPart_phi[ipart];
                LHE_taup_Mass = LHEPart_mass[ipart];
            }
            if (LHEPart_pdgId[ipart] == 15 && LHEPart_status[ipart] == 1)
            {
                flag_tau += 1;
                LHE_taum_Pt = LHEPart_pt[ipart];
                LHE_taum_Eta = LHEPart_eta[ipart];
                LHE_taum_Phi = LHEPart_phi[ipart];
                LHE_taum_Mass = LHEPart_mass[ipart];
            }
            if (((LHEPart_pdgId[ipart]) == -11 || (LHEPart_pdgId[ipart]) == -13 || (LHEPart_pdgId[ipart]) == -15) && LHEPart_status[ipart] == 1)
            { 
                flag += 1;
                LHE_lp_Pt = LHEPart_pt[ipart];
                LHE_lp_Eta = LHEPart_eta[ipart];
                LHE_lp_Phi = LHEPart_phi[ipart];
                LHE_lp_Mass = LHEPart_mass[ipart];
                LHE_lp.SetPtEtaPhiM(LHEPart_pt[ipart], LHEPart_eta[ipart], LHEPart_phi[ipart], LHEPart_mass[ipart]);
            }
            if (((LHEPart_pdgId[ipart]) == 11 || (LHEPart_pdgId[ipart]) == 13 || (LHEPart_pdgId[ipart]) == 15) && LHEPart_status[ipart] == 1)
            { 
                flag += 1;
                LHE_lm_Pt = LHEPart_pt[ipart];
                LHE_lm_Eta = LHEPart_eta[ipart];
                LHE_lm_Phi = LHEPart_phi[ipart];
                LHE_lm_Mass = LHEPart_mass[ipart];
                LHE_lm.SetPtEtaPhiM(LHEPart_pt[ipart], LHEPart_eta[ipart], LHEPart_phi[ipart], LHEPart_mass[ipart]);
            }
        }
        if (flag != 2) 
        {
            continue;
        }
        LHE_Z = LHE_lp + LHE_lm;
        LHE_Z_Pt = LHE_Z.Pt();
        LHE_Z_Eta = LHE_Z.Eta();
        LHE_Z_Phi = LHE_Z.Phi();
        LHE_Z_Mass = LHE_Z.M();

        if (flag_e == 2)
        {
            LHE_Ze = LHE_ep + LHE_em;
            LHE_Ze_Pt = LHE_Z.Pt();
            LHE_Ze_Eta = LHE_Z.Eta();
            LHE_Ze_Phi = LHE_Z.Phi();
            LHE_Ze_Mass = LHE_Z.M();
        }
        if (flag_mu == 2)
        {
            LHE_Zmu = LHE_mup + LHE_mum;
            LHE_Zmu_Pt = LHE_Z.Pt();
            LHE_Zmu_Eta = LHE_Z.Eta();
            LHE_Zmu_Phi = LHE_Z.Phi();
            LHE_Zmu_Mass = LHE_Z.M();
        }
        if (flag_tau == 2)
        {
            LHE_Ztau = LHE_taup + LHE_taum;
            LHE_Ztau_Pt = LHE_Z.Pt();
            LHE_Ztau_Eta = LHE_Z.Eta();
            LHE_Ztau_Phi = LHE_Z.Phi();
            LHE_Ztau_Mass = LHE_Z.M();
        }

        outputtree->Fill();
    }
    outputtree->Write();
    outputfile->Write();
    outputfile->Close();
}
