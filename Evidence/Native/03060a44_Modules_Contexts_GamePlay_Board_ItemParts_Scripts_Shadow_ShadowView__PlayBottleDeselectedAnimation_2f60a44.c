/* IL2CPP: Modules.Contexts.GamePlay.Board.ItemParts.Scripts.Shadow.ShadowView$$PlayBottleDeselectedAnimation
void Modules_Contexts_GamePlay_Board_ItemParts_Scripts_Shadow_ShadowView__PlayBottleDeselectedAnimation (Modules_Contexts_GamePlay_Board_ItemParts_Scripts_Shadow_ShadowView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.GamePlay.Board.ItemParts.Scripts.Shadow.ShadowView$$PlayBottleDeselectedAnimation
   void 
   Modules_Contexts_GamePlay_Board_ItemParts_Scripts_Shadow_ShadowView__PlayBottleDeselectedAnimation
   (Modules_Contexts_GamePlay_Board_ItemParts_Scripts_Shadow_ShadowView_o* __this, const MethodInfo*
   method); */

undefined8
Modules_Contexts_GamePlay_Board_ItemParts_Scripts_Shadow_ShadowView__PlayBottleDeselectedAnimation_2f60a44
          (long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  puVar2 = PTR_DAT_057e34f0;
  uVar1 = _UNK_0434cc40;
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  uVar9 = *(undefined4 *)(param_1 + 0x28);
  uVar10 = *(undefined4 *)(param_1 + 0x2c);
  uVar11 = *(undefined4 *)(param_1 + 0x30);
  uVar12 = *(undefined4 *)(param_1 + 0x34);
  if ((bRam0000000005c322ad & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d4a60,0);
    FUN_012d0dc8(PTR_DAT_057710a8);
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_05798d68);
    FUN_012d0dc8(PTR_DAT_057db880);
    FUN_012d0dc8(PTR_DAT_058020d8);
    FUN_012d0dc8(PTR_DAT_057e34f0);
    bRam0000000005c322ad = 1;
  }
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_057d4a60;
  if (lVar4 != 0) {
    System_Object___ctor_23dfe5c(lVar4,0);
    puVar8 = (undefined8 *)(lVar4 + 0x10);
    *puVar8 = uVar7;
    FUN_012d0d74(puVar8,uVar7);
    lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    puVar2 = PTR_DAT_057710a8;
    if (lVar5 != 0) {
      DG_Tweening_Core_DOGetter_Color____ctor_156c9ec(lVar5,lVar4,*(undefined8 *)PTR_DAT_057db880,0)
      ;
      lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      puVar3 = PTR_DAT_05798d68;
      puVar2 = PTR_DAT_057815e0;
      if (lVar6 != 0) {
        DG_Tweening_Core_DOSetter_Color____ctor_156da1c
                  (lVar6,lVar4,*(undefined8 *)PTR_DAT_058020d8,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar7 = DG_Tweening_DOTween__To_1ed8b94(uVar9,uVar10,uVar11,uVar12,uVar1,lVar5,lVar6,0);
        DG_Tweening_TweenSettingsExtensions__SetTarget_object__2451274
                  (uVar7,*puVar8,*(undefined8 *)puVar3);
        return uVar7;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

