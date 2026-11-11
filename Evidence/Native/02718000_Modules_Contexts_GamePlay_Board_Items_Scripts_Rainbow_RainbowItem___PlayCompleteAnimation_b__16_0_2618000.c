/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Rainbow.RainbowItem$$<PlayCompleteAnimation>b__16_0
void Modules_Contexts_GamePlay_Board_Items_Scripts_Rainbow_RainbowItem___PlayCompleteAnimation_b__16_0 (Modules_Contexts_GamePlay_Board_Items_Scripts_Rainbow_RainbowItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02717e94) */
/* WARNING: Removing unreachable block (ram,0x02717e98) */
/* WARNING: Removing unreachable block (ram,0x02717f64) */
/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Rainbow.RainbowItem$$<PlayCompleteAnimation>b__16_0
   void 
   Modules_Contexts_GamePlay_Board_Items_Scripts_Rainbow_RainbowItem___PlayCompleteAnimation_b__16_0
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Rainbow_RainbowItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Rainbow_RainbowItem___PlayCompleteAnimation_b__16_0_2618000
               (long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  Modules_Infrastructure_Common_Scripts_Component_AItem__SetParent_40e9f48(param_1,0,0);
  if (*(long *)(param_1 + 0x48) != 0) {
    Modules_Contexts_GamePlay_Board_Items_Scripts_Rainbow_RainbowView__HideStaticView_27457d8
              (*(long *)(param_1 + 0x48),0);
    if (*(long *)(param_1 + 0x48) != 0) {
      Modules_Contexts_GamePlay_Board_Items_Scripts_Rainbow_RainbowView__PlayParticles_2745804
                (*(long *)(param_1 + 0x48),0);
      if ((bRam0000000005c2ba35 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_057d0ba8);
        FUN_012d0dc8(PTR_DAT_057a2960);
        FUN_012d0dc8(PTR_DAT_058066c8);
        FUN_012d0dc8(PTR_DAT_057b41c8);
        FUN_012d0dc8(PTR_DAT_057be708);
        FUN_012d0dc8(PTR_DAT_058093f0);
        FUN_012d0dc8(PTR_DAT_05793d90);
        FUN_012d0dc8(PTR_DAT_05768d80);
        FUN_012d0dc8(PTR_DAT_057db558);
        FUN_012d0dc8(PTR_DAT_05796ce8);
        FUN_012d0dc8(PTR_DAT_057fb7d0);
        FUN_012d0dc8(PTR_DAT_057f5c18);
        FUN_012d0dc8(PTR_DAT_057cabb8);
        bRam0000000005c2ba35 = 1;
      }
      uStack_78 = 0;
      lStack_70 = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      lStack_90 = 0;
      uStack_a0 = 0;
      if (*(long *)(param_1 + 0x58) == 0) {
        return;
      }
      lVar10 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057cabb8);
      if (lVar10 != 0) {
        System_Collections_Generic_List_object____ctor_21fc1fc
                  (lVar10,*(undefined8 *)PTR_DAT_05796ce8);
        puVar8 = PTR_DAT_058066c8;
        puVar7 = PTR_DAT_057f5c18;
        puVar6 = PTR_DAT_057d0ba8;
        puVar5 = PTR_DAT_057b41c8;
        puVar4 = PTR_DAT_057a2960;
        puVar3 = PTR_DAT_05793d90;
        puVar2 = PTR_DAT_05768d80;
        if ((*(long *)(param_1 + 0x58) != 0) &&
           (lVar11 = *(long *)(*(long *)(param_1 + 0x58) + 0x18), lVar11 != 0)) {
          System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                    (&uStack_b8,lVar11,*(undefined8 *)PTR_DAT_057db558);
          uStack_78 = uStack_b0;
          uStack_80 = uStack_b8;
          lStack_70 = lStack_a8;
          while (uVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                    (&uStack_80,*(undefined8 *)puVar8), (uVar12 & 1) != 0) {
            if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                      (&uStack_b8,lStack_70,*(undefined8 *)puVar2);
            uStack_98 = uStack_b0;
            uStack_a0 = uStack_b8;
            lStack_90 = lStack_a8;
            while (uVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                      (&uStack_a0,*(undefined8 *)puVar5), lVar11 = lStack_90,
                  (uVar12 & 1) != 0) {
              if ((((lStack_90 != 0) && (*(char *)(lStack_90 + 0x4c) == '\0')) &&
                  (uVar12 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsEmpty_249577c
                                      (lStack_90,0), (uVar12 & 1) == 0)) &&
                 ((lVar11 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                                      (lVar11,0), lVar11 != 0 && (*(char *)(lVar11 + 0x55) == '\0'))
                 )) {
                lVar13 = *(long *)(lVar10 + 0x10);
                lVar14 = *(long *)puVar3;
                *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_012d0ef0();
                }
                uVar1 = *(uint *)(lVar10 + 0x18);
                if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                  *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                  *(long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = lVar11;
                  FUN_012d0d74();
                }
                else {
                  (**(code **)(*(long *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x58) + 8))
                            (lVar10);
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                      (&uStack_a0,*(undefined8 *)puVar6);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                    (&uStack_80,*(undefined8 *)puVar4);
          if (*(int *)(lVar10 + 0x18) != 0) {
            uVar9 = UnityEngine_Random__Range_383a650(0,*(int *)(lVar10 + 0x18),0);
            lVar10 = System_Collections_Generic_List_object___get_Item_21fc76c
                               (lVar10,uVar9,*(undefined8 *)puVar7);
            if (lVar10 == 0) goto LAB_02717f70;
            Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__SetRainbow_1e9e860
                      (lVar10,1,0);
          }
          return;
        }
      }
LAB_02717f70:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

