/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.ChargeableBottle.ChargeableBottleView$$PlayTrailAnimation
DG_Tweening_Sequence_o* Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleView__PlayTrailAnimation (Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleView_o* __this, UnityEngine_Transform_o* source, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.ChargeableBottle.ChargeableBottleView$$PlayTrailAnimation
   DG_Tweening_Sequence_o*
   Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleView__PlayTrailAnimation
   (Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleView_o* __this,
   UnityEngine_Transform_o* source, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleView__PlayTrailAnimation_2f59980
          (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  puVar1 = PTR_DAT_057815e0;
  if ((bRam0000000005c308ca & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576cdc8);
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057606c8);
    bRam0000000005c308ca = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = DG_Tweening_DOTween__Sequence_1eda154(0);
  if ((*(long *)(param_4 + 0x60) != 0) &&
     (lVar3 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_4 + 0x60),0), lVar3 != 0
     )) {
    UnityEngine_GameObject__SetActive_408e318(lVar3,0,0);
    if ((*(long *)(param_4 + 0x60) != 0) &&
       (((lVar3 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_4 + 0x60),0),
         lVar3 != 0 &&
         (lVar3 = UnityEngine_GameObject__get_transform_408e25c(lVar3,0), param_5 != 0)) &&
        (UnityEngine_Transform__get_position_4092b08(param_5,0), lVar3 != 0)))) {
      UnityEngine_Transform__set_position_4092ba8(lVar3,0);
      if ((*(long *)(param_4 + 0x60) != 0) &&
         (lVar3 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_4 + 0x60),0),
         lVar3 != 0)) {
        UnityEngine_GameObject__SetActive_408e318(lVar3,1,0);
        if (*(long *)(param_4 + 0x60) != 0) {
          UnityEngine_ParticleSystem__Play_3abc5c8(*(long *)(param_4 + 0x60),0);
          if (*(long *)(param_4 + 0x70) != 0) {
            uVar5 = UnityEngine_Transform__get_position_4092b08(*(long *)(param_4 + 0x70),0);
            puVar1 = PTR_DAT_057606c8;
            if ((*(long *)(param_4 + 0x48) != 0) && (*(long *)(param_4 + 0x60) != 0)) {
              uVar6 = *(undefined4 *)(*(long *)(param_4 + 0x48) + 0x24);
              uVar4 = UnityEngine_Component__get_transform_408b444(*(long *)(param_4 + 0x60),0);
              uVar5 = DG_Tweening_ShortcutExtensions__DOMove_1ee4f98
                                (uVar5,param_2,param_3,uVar6,uVar4,0,0);
              DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar2,uVar5,0);
              lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
              if (lVar3 != 0) {
                DG_Tweening_TweenCallback___ctor_1ed6da8
                          (lVar3,param_4,*(undefined8 *)PTR_DAT_0576cdc8,0);
                DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(uVar6,uVar2,lVar3,0);
                return uVar2;
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

