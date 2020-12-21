  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 5;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (SMC_packachazo_P)
    ;%
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% SMC_packachazo_P.A
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% SMC_packachazo_P.PWM_pinNumber
	  section.data(1).logicalSrcIdx = 1;
	  section.data(1).dtTransOffset = 0;
	
	  ;% SMC_packachazo_P.DigitalOutput_pinNumber
	  section.data(2).logicalSrcIdx = 2;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
      section.nData     = 14;
      section.data(14)  = dumData; %prealloc
      
	  ;% SMC_packachazo_P.Constant2_Value
	  section.data(1).logicalSrcIdx = 3;
	  section.data(1).dtTransOffset = 0;
	
	  ;% SMC_packachazo_P.StateSpace1_B
	  section.data(2).logicalSrcIdx = 4;
	  section.data(2).dtTransOffset = 1;
	
	  ;% SMC_packachazo_P.StateSpace1_C
	  section.data(3).logicalSrcIdx = 5;
	  section.data(3).dtTransOffset = 5;
	
	  ;% SMC_packachazo_P.StateSpace1_X0
	  section.data(4).logicalSrcIdx = 6;
	  section.data(4).dtTransOffset = 9;
	
	  ;% SMC_packachazo_P.Gain11_Gain
	  section.data(5).logicalSrcIdx = 7;
	  section.data(5).dtTransOffset = 11;
	
	  ;% SMC_packachazo_P.Gain12_Gain
	  section.data(6).logicalSrcIdx = 8;
	  section.data(6).dtTransOffset = 12;
	
	  ;% SMC_packachazo_P.Ref_Value
	  section.data(7).logicalSrcIdx = 9;
	  section.data(7).dtTransOffset = 13;
	
	  ;% SMC_packachazo_P.Gain1_Gain
	  section.data(8).logicalSrcIdx = 10;
	  section.data(8).dtTransOffset = 14;
	
	  ;% SMC_packachazo_P.Gain_Gain
	  section.data(9).logicalSrcIdx = 11;
	  section.data(9).dtTransOffset = 15;
	
	  ;% SMC_packachazo_P.Gain3_Gain
	  section.data(10).logicalSrcIdx = 12;
	  section.data(10).dtTransOffset = 16;
	
	  ;% SMC_packachazo_P.Saturation_UpperSat
	  section.data(11).logicalSrcIdx = 13;
	  section.data(11).dtTransOffset = 17;
	
	  ;% SMC_packachazo_P.Saturation_LowerSat
	  section.data(12).logicalSrcIdx = 14;
	  section.data(12).dtTransOffset = 18;
	
	  ;% SMC_packachazo_P.U_eq1_Value
	  section.data(13).logicalSrcIdx = 15;
	  section.data(13).dtTransOffset = 19;
	
	  ;% SMC_packachazo_P.Constant1_Value
	  section.data(14).logicalSrcIdx = 16;
	  section.data(14).dtTransOffset = 20;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(3) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% SMC_packachazo_P.AnalogInput_p1
	  section.data(1).logicalSrcIdx = 17;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(4) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% SMC_packachazo_P.Gain_Gain_nwjfwxlfng
	  section.data(1).logicalSrcIdx = 18;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(5) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 1;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (SMC_packachazo_B)
    ;%
      section.nData     = 8;
      section.data(8)  = dumData; %prealloc
      
	  ;% SMC_packachazo_B.X2
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% SMC_packachazo_B.Gain11
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% SMC_packachazo_B.Gain12
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% SMC_packachazo_B.theta
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% SMC_packachazo_B.Gain
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% SMC_packachazo_B.S
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% SMC_packachazo_B.U
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% SMC_packachazo_B.TmpSignalConversionAtStateSpace
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 1;
    sectIdxOffset = 1;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (SMC_packachazo_DW)
    ;%
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% SMC_packachazo_DW.Scope_PWORK.LoggedData
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% SMC_packachazo_DW.Scope1_PWORK.LoggedData
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 2;
	
	  ;% SMC_packachazo_DW.Scope2_PWORK.LoggedData
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 3;
	
	  ;% SMC_packachazo_DW.Scope3_PWORK.LoggedData
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 4;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 3659987659;
  targMap.checksum1 = 2498293648;
  targMap.checksum2 = 615262163;
  targMap.checksum3 = 3225033647;

