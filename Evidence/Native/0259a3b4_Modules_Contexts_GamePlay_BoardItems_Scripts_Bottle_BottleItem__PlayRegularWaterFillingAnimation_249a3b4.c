/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$PlayRegularWaterFillingAnimation
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__PlayRegularWaterFillingAnimation (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, int32_t previousHeight, int32_t newHeight, int32_t colorId, bool withParticle, bool isForGenerator, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$PlayRegularWaterFillingAnimation
   DG_Tweening_Tween_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__PlayRegularWaterFillingAnimation
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, int32_t
   previousHeight, int32_t newHeight, int32_t colorId, bool withParticle, bool isForGenerator, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__PlayRegularWaterFillingAnimation_249a3b4
               (undefined1 param_1 [16],undefined8 param_2,long param_3,int param_4,int param_5,
               undefined4 param_6,ulong param_7,uint param_8)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  
  if ((bRam0000000005c2b313 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d5610);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c2b313 = 1;
  }
  lVar5 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                    (param_3);
  if ((param_7 & 1) != 0) {
    if (((**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) == 0) ||
        (lVar6 = *(long *)(**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) + 0x18), lVar6 == 0)) ||
       (lVar6 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                          (lVar6,*(undefined8 *)PTR_DAT_057d5610), lVar6 == 0)) goto LAB_0259a508;
    uVar7 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorService__GetColorAndColorId_2307d70
                      (lVar6,param_6,0);
    if (*(long *)(param_3 + 0x50) == 0) goto LAB_0259a508;
    lVar6 = *(long *)(*(long *)(param_3 + 0x50) + 0x60);
    if (cRam0000000005c23dd6 == '\0') {
      FUN_012d0dc8(PTR_DAT_057d6f00);
      cRam0000000005c23dd6 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_057d6f00 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    if (lVar6 == 0) goto LAB_0259a508;
    iVar2 = param_5 - param_4;
    iVar4 = -iVar2;
    if (-1 < iVar2) {
      iVar4 = iVar2;
    }
    Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_WaterParticleView__Play_22fe9b8
              (lVar6,uVar7,lVar5,iVar4,0);
  }
  iVar4 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetIndexFromTheBottom_249545c
                    (param_3,lVar5);
  if (lVar5 != 0) {
    uVar1 = *(undefined4 *)(param_3 + 0x48);
    lVar6 = *(long *)(lVar5 + 0x48);
    *(int *)(lVar5 + 0x60) = param_5;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    if ((bRam0000000005c2b27c & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_0578b048);
      FUN_012d0dc8(PTR_DAT_0577d048);
      FUN_012d0dc8(PTR_DAT_057c7568);
      bRam0000000005c2b27c = 1;
    }
    if (((*(long *)(lVar6 + 0x68) != 0) &&
        (lVar5 = Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Configs_WaterViewConfig__GetWaterPivotPositionsByBottleHeight_248b788
                           (*(long *)(lVar6 + 0x68),uVar1), lVar5 != 0)) &&
       (*(long *)(lVar5 + 0x18) != 0)) {
      System_Collections_Generic_List_WaterPivotPosition___get_Item_25311fc
                (*(long *)(lVar5 + 0x18),iVar4 + param_5,*(undefined8 *)PTR_DAT_0577d048);
      puVar3 = PTR_DAT_0578b048;
      if (*(long *)(lVar6 + 0x50) != 0) {
        Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer__OnRisingAnimationStart_1e9ee28
                  (*(long *)(lVar6 + 0x50),0);
        plVar8 = *(long **)(lVar6 + 0x80);
        uVar1 = *(undefined4 *)(lVar6 + 200);
        lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
        if ((lVar5 != 0) &&
           (System_Action___ctor_21239bc(lVar5,lVar6,*(undefined8 *)PTR_DAT_057c7568,0),
           plVar8 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0258bd40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar8 + 0x188))
                    (param_2,plVar8,param_4,iVar4 + param_5,iVar4,param_8 & 1,uVar1,lVar5,
                     *(undefined8 *)(*plVar8 + 400));
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
LAB_0259a508:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

