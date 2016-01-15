createMacro(TTree * t) {
  gROOT->ProcessLine(".> branches.txt");
  TLeaf * aa; 
  TObjArrayIter i(t->GetListOfLeaves());
  while (aa = (TLeaf *) i.Next()) {     
  //   if(aa->GetTypeName())
//     TString typ = TString(aa->GetTypeName());
     TString typ = aa->GetTypeName();
     TString name = aa->GetName();
    if (typ.EndsWith(">")) typ.Append("*");
    if (!typ.Contains("std::")) typ.ReplaceAll("vector","std::vector");
    printf("rw\t%s\t%s\tm_%s\n",aa->GetName(),typ.Data(),name.Data()); 
//    printf("%s\n",aa->GetName());
  }
  gROOT->ProcessLine(".> ");
}
  
