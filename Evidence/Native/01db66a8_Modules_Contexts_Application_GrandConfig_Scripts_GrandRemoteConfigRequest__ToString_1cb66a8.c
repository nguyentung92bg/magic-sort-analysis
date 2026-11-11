/* IL2CPP: Modules.Contexts.Application.GrandConfig.Scripts.GrandRemoteConfigRequest$$ToString
System_String_o* Modules_Contexts_Application_GrandConfig_Scripts_GrandRemoteConfigRequest__ToString (Modules_Contexts_Application_GrandConfig_Scripts_GrandRemoteConfigRequest_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.GrandConfig.Scripts.GrandRemoteConfigRequest$$ToString
   System_String_o*
   Modules_Contexts_Application_GrandConfig_Scripts_GrandRemoteConfigRequest__ToString
   (Modules_Contexts_Application_GrandConfig_Scripts_GrandRemoteConfigRequest_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Application_GrandConfig_Scripts_GrandRemoteConfigRequest__ToString_1cb66a8
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  puVar2 = PTR_DAT_057db748;
  puVar1 = PTR_DAT_057941b8;
  if ((bRam0000000005c27742 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057941b8);
    bRam0000000005c27742 = 1;
  }
  uStack_34 = *(undefined4 *)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&uStack_34);
  uStack_38 = *(undefined4 *)(param_1 + 0x1c);
  uVar4 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&uStack_38);
  System_String__Format_1ed15fc(*(undefined8 *)puVar1,uVar5,uVar3,uVar4,0);
  return;
}

