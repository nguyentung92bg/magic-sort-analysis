/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.MosaicTargetView$$<BreakAnimation>b__24_0
void Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTargetView___BreakAnimation_b__24_0 (Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTargetView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.MosaicTargetView$$<BreakAnimation>b__24_0
   void 
   Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTargetView___BreakAnimation_b__24_0
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTargetView_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTargetView___BreakAnimation_b__24_0_2748ea8
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2c6ae & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575c3c8);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057a5ca0);
    FUN_012d0dc8(PTR_DAT_05778ae0);
    FUN_012d0dc8(PTR_DAT_057c0828);
    FUN_012d0dc8(PTR_DAT_057a6c70);
    FUN_012d0dc8(PTR_DAT_057e6e60);
    bRam0000000005c2c6ae = 1;
  }
  uStack_40 = 0;
  lStack_38 = 0;
  uStack_48 = 0;
  if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
      (lVar4 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar4 != 0)) &&
     (lVar4 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar4,*(undefined8 *)PTR_DAT_0575c3c8), lVar4 != 0)) {
    lVar7 = *(long *)(param_1 + 0x28);
    auVar8 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetWoodBoxKeyMovingSorting_4002b40
                       (lVar4,0);
    if (lVar7 != 0) {
      Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_TargetBreakParticleController__SetVfxSorting_274910c
                (lVar7,auVar8._0_8_,auVar8._8_8_);
      if (((*(long *)(param_1 + 0x28) != 0) &&
          (lVar4 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x28),0),
          lVar4 != 0)) &&
         (lVar4 = UnityEngine_GameObject__get_transform_408e25c(lVar4,0), lVar4 != 0)) {
        UnityEngine_Transform__set_parent_40933e0(lVar4,0,0);
        if ((*(long *)(param_1 + 0x28) != 0) &&
           (lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x28), lVar4 != 0)) {
          UnityEngine_ParticleSystem__Play_3abc5c8(lVar4,0);
          puVar3 = PTR_DAT_057e6e60;
          puVar2 = PTR_DAT_057a5ca0;
          puVar1 = PTR_DAT_05778ae0;
          if (*(long *)(param_1 + 0x38) != 0) {
            System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                      (&uStack_48,*(long *)(param_1 + 0x38),*(undefined8 *)PTR_DAT_057a6c70);
            while (uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                     (&uStack_48,*(undefined8 *)puVar1), (uVar5 & 1) != 0) {
              if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef0();
              }
              UnityEngine_GameObject__SetActive_408e318(lStack_38,0,0);
            }
            System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                      (&uStack_48,*(undefined8 *)puVar2);
            if ((*(long *)(param_1 + 0x30) != 0) &&
               (lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 0x98), lVar4 != 0)) {
              lVar7 = *(long *)(param_1 + 0x70);
              lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                                (lVar4,*(undefined4 *)(param_1 + 0x68),*(undefined8 *)puVar3);
              if ((lVar4 != 0) &&
                 (uVar6 = UnityEngine_Object__get_name_4078cb0(lVar4,0), lVar7 != 0)) {
                UnityEngine_Animation__Play_1f7a100(lVar7,uVar6,0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

