/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$GetStrikeShowCurrentLeague
System_String_o* Modules_Contexts_Application_Events_Scripts_EventSender__GetStrikeShowCurrentLeague (Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowDataService_o* strikeShowDataService, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$GetStrikeShowCurrentLeague
   System_String_o*
   Modules_Contexts_Application_Events_Scripts_EventSender__GetStrikeShowCurrentLeague
   (Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowDataService_o* strikeShowDataService, const
   MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__GetStrikeShowCurrentLeague_149a2a8
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_28;
  
  if ((bRam0000000005c2389e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d6138);
    FUN_012d0dc8(PTR_DAT_05776390);
    FUN_012d0dc8(PTR_DAT_05775008);
    bRam0000000005c2389e = 1;
  }
  puVar1 = PTR_DAT_05776390;
  if (param_1 != 0) {
    uStack_38 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowDataService__GetLeague_2af5390
                          (param_1,0);
    uStack_48 = *(undefined8 *)puVar1;
    uStack_40 = 0xffffffffffffffff;
    lVar3 = System_Enum__ToString_23a4eac(&uStack_48,0);
    puVar2 = PTR_DAT_057d6138;
    puVar1 = PTR_DAT_05775008;
    if (lVar3 != 0) {
      uVar4 = System_String__ToLowerInvariant_1ed4fe4(lVar3,0);
      uStack_28 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowDataService__GetServerElo_2af53b4
                            (param_1,0);
      uVar5 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&uStack_28);
      System_String__Format_1ed15b8(*(undefined8 *)puVar1,uVar4,uVar5,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

