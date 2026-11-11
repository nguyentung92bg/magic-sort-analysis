/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.MosaicAnimationConfig$$GetPivotHeight
float Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicAnimationConfig__GetPivotHeight (Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicAnimationConfig_o* __this, int32_t type, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.MosaicAnimationConfig$$GetPivotHeight
   float Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicAnimationConfig__GetPivotHeight
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicAnimationConfig_o* __this, int32_t
   type, const MethodInfo* method); */

undefined4
Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicAnimationConfig__GetPivotHeight_2745fc4
          (long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  int aiStack_78 [2];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((bRam0000000005c2c69e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05807f60);
    FUN_012d0dc8(PTR_DAT_05795f20);
    FUN_012d0dc8(PTR_DAT_057cc5c8);
    FUN_012d0dc8(PTR_DAT_0579fc88);
    FUN_012d0dc8(PTR_DAT_057bf3b8);
    FUN_012d0dc8(PTR_DAT_057961c0);
    FUN_012d0dc8(PTR_DAT_057ec608);
    bRam0000000005c2c69e = 1;
  }
  puVar5 = PTR_DAT_05807f60;
  puVar4 = PTR_DAT_057ec608;
  puVar3 = PTR_DAT_057cc5c8;
  puVar2 = PTR_DAT_057961c0;
  puVar1 = PTR_DAT_05795f20;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  if (*(long *)(param_1 + 0xb0) != 0) {
    System_Collections_Generic_List_MosaicAnimationConfig_TargetTypeHeight___GetEnumerator_309dfe8
              (aiStack_78,*(long *)(param_1 + 0xb0),*(undefined8 *)PTR_DAT_057bf3b8);
    uStack_58 = uStack_70;
    uStack_50 = uStack_68;
    do {
      uVar6 = System_Collections_Generic_List_Enumerator_MosaicAnimationConfig_TargetTypeHeight___MoveNext_3c6e424
                        (&uStack_60,*(undefined8 *)puVar3);
      if ((uVar6 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_MosaicAnimationConfig_TargetTypeHeight___Dispose_3c6e420
                  (&uStack_60,*(undefined8 *)puVar1);
        aiStack_78[0] = param_2;
        uVar7 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,aiStack_78);
        uVar7 = System_String__Format_1ec10a8(*(undefined8 *)puVar4,uVar7,0);
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_0130472c(*(long *)puVar5);
        }
        UnityEngine_Debug__LogWarning_40800c4(uVar7,0);
        return 0;
      }
    } while ((int)uStack_50 != param_2);
    uVar6 = (ulong)uStack_50 >> 0x20;
    System_Collections_Generic_List_Enumerator_MosaicAnimationConfig_TargetTypeHeight___Dispose_3c6e420
              (&uStack_60,*(undefined8 *)puVar1);
    return (int)uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

