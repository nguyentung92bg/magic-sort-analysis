/* IL2CPP: Modules.Contexts.Application.Events.Scripts.FirebaseEventSender$$AddParameter
void Modules_Contexts_Application_Events_Scripts_FirebaseEventSender__AddParameter (Modules_Contexts_Application_Events_Scripts_FirebaseEventSender_o* __this, Firebase_Analytics_Parameter_array** parameters, int32_t index, System_String_o* key, Il2CppObject* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.FirebaseEventSender$$AddParameter
   void Modules_Contexts_Application_Events_Scripts_FirebaseEventSender__AddParameter
   (Modules_Contexts_Application_Events_Scripts_FirebaseEventSender_o* __this,
   Firebase_Analytics_Parameter_array** parameters, int32_t index, System_String_o* key,
   Il2CppObject* value, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_FirebaseEventSender__AddParameter_1cc6a70
               (undefined8 param_1,undefined8 *param_2,uint param_3,undefined8 param_4,long *param_5
               )

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  int *piVar11;
  float *pfVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  long lVar15;
  long *plVar16;
  
  if ((bRam0000000005c277aa & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b4910);
    FUN_012d0dc8(PTR_DAT_05765ce8);
    FUN_012d0dc8(PTR_DAT_057c1328);
    FUN_012d0dc8(PTR_DAT_057e6c10);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057d6138);
    FUN_012d0dc8(PTR_DAT_05803cf0);
    FUN_012d0dc8(PTR_DAT_057ce7d0);
    FUN_012d0dc8(PTR_DAT_057c9ca0);
    FUN_012d0dc8(PTR_DAT_05792460);
    FUN_012d0dc8(PTR_DAT_057a6440);
    bRam0000000005c277aa = 1;
  }
  puVar8 = PTR_DAT_05803cf0;
  puVar7 = PTR_DAT_057db748;
  puVar6 = PTR_DAT_057d6138;
  puVar5 = PTR_DAT_057ce7d0;
  puVar4 = PTR_DAT_057c9ca0;
  puVar3 = PTR_DAT_057c1328;
  puVar2 = PTR_DAT_05765ce8;
  if (param_5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar9 = *param_5;
  if (lVar9 == *(long *)PTR_DAT_057d6138) {
    plVar16 = (long *)*param_2;
    lVar9 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05803cf0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    if (*(long *)(*param_5 + 0x40) != *(long *)(*(long *)puVar6 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_012d1288(param_5);
    }
    puVar13 = (undefined8 *)thunk_FUN_01320fa0(param_5);
    Firebase_Analytics_Parameter___ctor_27ce344(lVar9,param_4,*puVar13,0);
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    lVar15 = thunk_FUN_01320d5c(lVar9,*(undefined8 *)(*plVar16 + 0x40));
    if (lVar15 == 0) {
      uVar10 = thunk_FUN_012d5b8c();
                    /* WARNING: Subroutine does not return */
      FUN_012d0eb8(uVar10,0);
    }
    if (*(uint *)(plVar16 + 3) <= param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef8();
    }
    plVar16[(long)(int)param_3 + 4] = lVar9;
    FUN_012d0d74(plVar16 + (long)(int)param_3 + 4,lVar9);
  }
  else if (lVar9 == *(long *)PTR_DAT_057db748) {
    plVar16 = (long *)*param_2;
    lVar9 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05803cf0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    if (*(long *)(*param_5 + 0x40) != *(long *)(*(long *)puVar7 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_012d1288(param_5);
    }
    piVar11 = (int *)thunk_FUN_01320fa0(param_5);
    Firebase_Analytics_Parameter___ctor_27ce344(lVar9,param_4,(long)*piVar11,0);
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    lVar15 = thunk_FUN_01320d5c(lVar9,*(undefined8 *)(*plVar16 + 0x40));
    if (lVar15 == 0) {
      uVar10 = thunk_FUN_012d5b8c();
                    /* WARNING: Subroutine does not return */
      FUN_012d0eb8(uVar10,0);
    }
    if (*(uint *)(plVar16 + 3) <= param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef8();
    }
    plVar16[(long)(int)param_3 + 4] = lVar9;
    FUN_012d0d74(plVar16 + (long)(int)param_3 + 4,lVar9);
  }
  else if (lVar9 == *(long *)PTR_DAT_057ce7d0) {
    plVar16 = (long *)*param_2;
    lVar9 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05803cf0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    if (*(long *)(*param_5 + 0x40) != *(long *)(*(long *)puVar5 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_012d1288(param_5);
    }
    pfVar12 = (float *)thunk_FUN_01320fa0(param_5);
    Firebase_Analytics_Parameter___ctor_27ce3d8((double)*pfVar12,lVar9,param_4,0);
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    lVar15 = thunk_FUN_01320d5c(lVar9,*(undefined8 *)(*plVar16 + 0x40));
    if (lVar15 == 0) {
      uVar10 = thunk_FUN_012d5b8c();
                    /* WARNING: Subroutine does not return */
      FUN_012d0eb8(uVar10,0);
    }
    if (*(uint *)(plVar16 + 3) <= param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef8();
    }
    plVar16[(long)(int)param_3 + 4] = lVar9;
    FUN_012d0d74(plVar16 + (long)(int)param_3 + 4,lVar9);
  }
  else if (lVar9 == *(long *)PTR_DAT_05765ce8) {
    plVar16 = (long *)*param_2;
    lVar15 = lVar9;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_0130472c();
      lVar9 = *param_5;
      lVar15 = *(long *)puVar2;
    }
    if (*(long *)(lVar9 + 0x40) != *(long *)(lVar15 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_012d1288(param_5);
    }
    puVar13 = (undefined8 *)thunk_FUN_01320fa0(param_5);
    uVar10 = System_Decimal__op_Explicit_2a96218(*puVar13,puVar13[1],0);
    lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar8);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    Firebase_Analytics_Parameter___ctor_27ce3d8(uVar10,lVar9,param_4,0);
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    lVar15 = thunk_FUN_01320d5c(lVar9,*(undefined8 *)(*plVar16 + 0x40));
    if (lVar15 == 0) {
      uVar10 = thunk_FUN_012d5b8c();
                    /* WARNING: Subroutine does not return */
      FUN_012d0eb8(uVar10,0);
    }
    if (*(uint *)(plVar16 + 3) <= param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef8();
    }
    plVar16[(long)(int)param_3 + 4] = lVar9;
    FUN_012d0d74(plVar16 + (long)(int)param_3 + 4,lVar9);
  }
  else if (lVar9 == *(long *)PTR_DAT_057c1328) {
    plVar16 = (long *)*param_2;
    lVar9 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05803cf0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    if (*(long *)(*param_5 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_012d1288(param_5);
    }
    puVar13 = (undefined8 *)thunk_FUN_01320fa0(param_5);
    Firebase_Analytics_Parameter___ctor_27ce3d8(*puVar13,lVar9,param_4,0);
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    lVar15 = thunk_FUN_01320d5c(lVar9,*(undefined8 *)(*plVar16 + 0x40));
    if (lVar15 == 0) {
      uVar10 = thunk_FUN_012d5b8c();
                    /* WARNING: Subroutine does not return */
      FUN_012d0eb8(uVar10,0);
    }
    if (*(uint *)(plVar16 + 3) <= param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef8();
    }
    plVar16[(long)(int)param_3 + 4] = lVar9;
    FUN_012d0d74(plVar16 + (long)(int)param_3 + 4,lVar9);
  }
  else if (lVar9 == *(long *)PTR_DAT_057c9ca0) {
    plVar16 = (long *)*param_2;
    lVar9 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05803cf0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    if (*param_5 != *(long *)puVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_012d1288(param_5);
    }
    Firebase_Analytics_Parameter___ctor_27ce300(lVar9,param_4,param_5,0);
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    lVar15 = thunk_FUN_01320d5c(lVar9,*(undefined8 *)(*plVar16 + 0x40));
    if (lVar15 == 0) {
      uVar10 = thunk_FUN_012d5b8c();
                    /* WARNING: Subroutine does not return */
      FUN_012d0eb8(uVar10,0);
    }
    if (*(uint *)(plVar16 + 3) <= param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef8();
    }
    plVar16[(long)(int)param_3 + 4] = lVar9;
    FUN_012d0d74(plVar16 + (long)(int)param_3 + 4,lVar9);
  }
  else if (lVar9 == *(long *)PTR_DAT_057b4910) {
    plVar16 = (long *)*param_2;
    puVar14 = (undefined1 *)thunk_FUN_01320fa0(param_5);
    uVar1 = *puVar14;
    lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar8);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    Firebase_Analytics_Parameter___ctor_27ce344(lVar9,param_4,uVar1,0);
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    lVar15 = thunk_FUN_01320d5c(lVar9,*(undefined8 *)(*plVar16 + 0x40));
    if (lVar15 == 0) {
      uVar10 = thunk_FUN_012d5b8c();
                    /* WARNING: Subroutine does not return */
      FUN_012d0eb8(uVar10,0);
    }
    if (*(uint *)(plVar16 + 3) <= param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef8();
    }
    plVar16[(long)(int)param_3 + 4] = lVar9;
    FUN_012d0d74(plVar16 + (long)(int)param_3 + 4,lVar9);
  }
  else {
    uVar10 = System_Object__GetType_23e0654(param_5,0);
    uVar10 = System_String__Format_1ec10a8(*(undefined8 *)PTR_DAT_05792460,uVar10,0);
    lVar9 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057e6c10);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    Modules_Contexts_Application_Events_Scripts_HandledException___ctor_1cb43dc
              (lVar9,uVar10,*(undefined8 *)PTR_DAT_057a6440);
    Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseCrashlyticsWrapper__LogException_1cb4458
              (lVar9);
  }
  return;
}

