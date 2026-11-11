/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckView$$Prepare
void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckView__Prepare (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckView_o* __this, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, int32_t duckType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckView$$Prepare
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckView__Prepare
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckView_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, int32_t duckType, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckView__Prepare_2f52d80
               (long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_e8 [88];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckAnimationConfig__TryGetDuckSprite_27562e4
                      (*(long *)(param_1 + 0x20),param_4,&uStack_38,0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_03052f28;
      UnityEngine_SpriteRenderer__set_sprite_4095b64(*(long *)(param_1 + 0x30),uStack_38,0);
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseColorConfig__TryGetDuckColor_2756b10
                (*(long *)(param_1 + 0x28),param_4,&uStack_90,0);
      func_0x01037ce0(auStack_e8,&uStack_90,0x54);
      Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckView__SetParticleColor_2f53fd8
                (param_1,auStack_e8);
      Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckView__SetSorting_2f5411c
                (param_1,param_2,param_3);
      Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckView__ResetVfxSortingGroup_2f5418c
                (param_1);
      if (*(long *)(param_1 + 0x30) != 0) {
        UnityEngine_SpriteRenderer__set_color_4095de0
                  (0x3f800000,0x3f800000,0x3f800000,_UNK_04397c7c,*(long *)(param_1 + 0x30),0);
        if (*(long *)(param_1 + 0x38) != 0) {
          UnityEngine_SpriteRenderer__set_color_4095de0
                    (0x3f800000,0x3f800000,0x3f800000,_UNK_04339cd0,*(long *)(param_1 + 0x38),0);
          lVar2 = UnityEngine_Component__get_transform_408b444(param_1,0);
          if (cRam0000000005c230a9 == '\0') {
            FUN_012d0dc8(PTR_DAT_05805c10);
            cRam0000000005c230a9 = '\x01';
          }
          if (lVar2 != 0) {
            lVar3 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
            UnityEngine_Transform__set_localScale_40932d0
                      (*(undefined4 *)(lVar3 + 0xc),*(undefined4 *)(lVar3 + 0x10),
                       *(undefined4 *)(lVar3 + 0x14),lVar2,0);
            if ((*(long *)(param_1 + 0x40) != 0) &&
               (lVar2 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x40),0),
               lVar2 != 0)) {
              UnityEngine_GameObject__SetActive_408e318(lVar2,0,0);
              if ((*(long *)(param_1 + 0x48) != 0) &&
                 (lVar2 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x48),0)
                 , lVar2 != 0)) {
                UnityEngine_GameObject__SetActive_408e318(lVar2,0,0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_03052f28:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

